/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:16:11 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/09 13:46:40 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_eigen(char c, int *laenge, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), laenge);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), laenge);
	if (c == 's')
		ft_putstr(va_arg(args, char *), laenge);
	if (c == 'u')
		ft_unsigned_int(va_arg(args, unsigned int), laenge);
	if (c == 'p')
		ft_putptr(va_arg(args, long unsigned int), laenge);
	if (c == 'X' || c == 'x')
		ft_puthex(va_arg(args, unsigned int), c, laenge);
	if (c == '%')
		*laenge += write(1, "%", 1);
	return ;
}

int	ft_printf(const char *pf, ...)
{
	int		laenge;
	va_list	args;
	int		c;

	laenge = 0;
	c = 0;
	va_start(args, pf);
	while (pf[c])
	{
		if (pf[c] == '%')
		{
			c++;
			ft_eigen(pf[c], &laenge, args);
		}
		else
		{
			write(1, &pf[c], 1);
			laenge++;
		}
		c++;
	}
	va_end(args);
	return (laenge);
}

/*int	main(void)
{
	printf("%d\n", printf("%c\n", 'M'));
	printf("%d\n", ft_printf("%c\n", 'M'));
	return (0);
}*/
