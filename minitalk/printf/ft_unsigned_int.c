/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:00:14 by mbratic           #+#    #+#             */
/*   Updated: 2022/12/15 11:02:09 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int nb, int *laenge)
{
	if (nb > 9)
	{
		ft_unsigned_int(nb / 10, laenge);
		ft_unsigned_int(nb % 10, laenge);
	}
	else
	{
		ft_putchar(nb + 48, laenge);
	}
}
