/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:17:43 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/09 13:30:08 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *laenge)
{
	if (nb == -2147483648)
	{
		*laenge += write(1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0', laenge);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, laenge);
		ft_putchar(nb % 10 + '0', laenge);
	}
	else
	{
		ft_putchar('-', laenge);
		ft_putnbr(nb * -1, laenge);
	}
}
