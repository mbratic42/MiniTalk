/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:46:02 by mbratic           #+#    #+#             */
/*   Updated: 2023/02/03 13:50:32 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_macher(int signal)
{
	static int	bits;
	static int	s;

	if (signal == SIGUSR1)
		s |= (1 << bits);
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", s);
		bits = 0;
		s = 0;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	(void)av;
	if (ac != 1)
	{
		ft_printf("Wrong...");
		return (0);
	}
	pid = getpid();
	ft_printf("\033[94mPID\033[0m \033[96m->\033[0m %d\n", pid);
	ft_printf("\033[90mWaiting for a message...\033[0m\n");
	while (ac == 1)
	{
		signal(SIGUSR1, ft_macher);
		signal(SIGUSR2, ft_macher);
		pause();
	}
	return (0);
}
