/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:36:51 by mbratic           #+#    #+#             */
/*   Updated: 2022/12/20 13:03:45 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *pf, ...);
char	*ft_putstr(char *str, int *laenge);
void	ft_putptr(long unsigned int nb, int *laenge);
void	ft_putnbr(int nb, int *laenge);
void	ft_putchar(char c, int *laenge);
void	ft_puthex(unsigned int nb, char c, int *laenge);
void	ft_unsigned_int(unsigned int nb, int *laenge);
#endif
