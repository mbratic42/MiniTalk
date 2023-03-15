/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:09:18 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/09 13:10:44 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putstr(char *str, int *laenge)
{
	int	i;

	i = 0;
	if (!str)
	{
		*laenge += write(1, "(null)", 6);
		return (0);
	}
	while (str[i] != '\0')
	{
		*laenge += write(1, &str[i], 1);
		i++;
	}
	return (str);
}
