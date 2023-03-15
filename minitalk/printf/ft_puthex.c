/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:13 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/09 13:51:56 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, char c, int *laenge)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c, laenge);
		ft_puthex(nb % 16, c, laenge);
	}
	if (nb < 16)
	{
		if (c == 'x')
			ft_putchar("0123456789abcdef"[nb], laenge);
		if (c == 'X')
			ft_putchar("0123456789ABCDEF"[nb], laenge);
	}
}
