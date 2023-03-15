/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:06:35 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/12 12:31:49 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ssrc;
	unsigned char	*sdst;

	ssrc = (unsigned char *)s1;
	sdst = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ssrc[i] != sdst[i])
			return (ssrc[i] - sdst[i]);
		i++;
	}
	return (0);
}
