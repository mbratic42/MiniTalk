/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:01:39 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/24 14:06:13 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nummer;

	nummer = n;
	if (nummer < 0)
	{
		nummer = -nummer;
		ft_putchar_fd('-', fd);
	}
	if (nummer < 10)
	{
		ft_putchar_fd(48 + nummer % 10, fd);
	}
	else
	{
		ft_putnbr_fd(nummer / 10, fd);
		ft_putchar_fd(48 + nummer % 10, fd);
	}
}
