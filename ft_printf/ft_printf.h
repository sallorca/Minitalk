/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:34:26 by sallorca          #+#    #+#             */
/*   Updated: 2022/11/30 12:07:42 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

void	ft_printfchar(char s, int *len);
void	ft_printfstr(char *s, int *len);
void	ft_printfnbr(int n, int *len);
void	ft_printfunsing(unsigned int n, int *len);
void	ft_printfhexa(unsigned long n, int *len, char x);
void	ft_printfpoint(void *n, int *len);
void	ft_checkarg(char s, int *len, va_list arg);

int		ft_printf(const char *s, ...);

#endif
