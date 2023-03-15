/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:29:42 by mbratic           #+#    #+#             */
/*   Updated: 2023/01/25 16:32:50 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <signal.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_eigen(char c, int *laenge, va_list args);
void	ft_macher(int signal);
void	ft_bit_sending(int pid, char i);
int		ft_printf(const char *pf, ...);
int		main(int ac, char **av);
int		ft_atoi(const char *str);
#endif
