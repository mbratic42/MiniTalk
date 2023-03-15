/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:46:27 by mbratic           #+#    #+#             */
/*   Updated: 2023/02/03 13:42:39 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_bit_sending(int pid, char i)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if ((i & (1 << bits)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bits++;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	x;

	x = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		while (av[2][x] != '\0')
		{
			ft_bit_sending(pid, av[2][x]);
			x++;
		}
		ft_bit_sending(pid, '\n');
	}
	else
	{
		ft_printf("Wrong format . . . .\n");
		return (1);
	}
	return (0);
}
