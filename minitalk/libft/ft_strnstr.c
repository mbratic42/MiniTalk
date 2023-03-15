/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:08:52 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/17 17:09:29 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	m;

	i = 0;
	while ((i < len && big[i] != '\0') || i == 0)
	{
		m = 0;
		while (i + m < len && big[i + m] == little[m]
			&& little[m] != '\0')
			m++;
		if (little[m] == '\0' || little[m] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
