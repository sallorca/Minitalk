/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:54:35 by sallorca          #+#    #+#             */
/*   Updated: 2022/11/25 17:39:10 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_checkarg(char s, int *len, va_list arg)
{
	if (s == 'c')
		ft_printfchar(va_arg(arg, int), len);
	else if (s == 's')
		ft_printfstr(va_arg(arg, char *), len);
	else if (s == 'p')
		ft_printfpoint(va_arg(arg, void *), len);
	else if ((s == 'd') || (s == 'i'))
		ft_printfnbr(va_arg(arg, int), len);
	else if (s == 'u')
		ft_printfunsing(va_arg(arg, unsigned int), len);
	else if (s == 'x')
		ft_printfhexa(va_arg(arg, unsigned int), len, 'x');
	else if (s == 'X')
		ft_printfhexa(va_arg(arg, unsigned int), len, 'X');
	else if (s == '%')
		ft_printfchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_checkarg(s[i], &len, arg);
		}
		else
			ft_printfchar(s[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
