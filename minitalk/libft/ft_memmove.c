/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:50:26 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/17 12:38:43 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*srcc;
	char	*destt;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	destt = (char *)dest;
	if (!destt && !srcc)
		return (NULL);
	if (srcc < destt)
		while ((int)(--n) >= 0)
			*(destt + n) = *(srcc + n);
	else
		while (++i < n)
			*(destt + i) = *(srcc + i);
	return (dest);
}
