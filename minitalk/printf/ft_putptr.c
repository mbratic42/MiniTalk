/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:34:34 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/09 13:41:56 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(long unsigned int nb, int *laenge)
{
	if (nb >= 16)
	{
		ft_p(nb / 16, laenge);
		ft_p(nb % 16, laenge);
	}
	else
		ft_putchar("0123456789abcdef"[nb], laenge);
}

void	ft_putptr(long unsigned int nb, int *laenge)
{
	if (nb == 0)
	{
		*laenge += write(1, "(nil)", 5);
	}
	else
	{
		*laenge += write(1, "0x", 2);
		ft_p(nb, laenge);
	}
}
