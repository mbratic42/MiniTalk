/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:14:26 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/17 16:55:05 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!dst && size == 0)
		return (0);
	while (dst[i] && i < size)
		i++;
	while ((src[y] && ((i + y + 1) < size)))
	{
		dst[i + y] = src[y];
		y++;
	}
	if (i != size)
		dst[i + y] = '\0';
	return (i + ft_strlen(src));
}
