/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfarg2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:36:05 by sallorca          #+#    #+#             */
/*   Updated: 2022/11/25 17:50:39 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfhexa(unsigned long n, int *len, char x)
{
	if (n >= 16)
	{
		ft_printfhexa((n / 16), len, x);
		ft_printfhexa((n % 16), len, x);
	}
	if (n < 16)
	{
		if (n < 10)
			ft_printfchar(n + 48, len);
		else
		{
			if (x == 'x')
				ft_printfchar(n + 87, len);
			if (x == 'X')
				ft_printfchar(n + 55, len);
		}
	}
}

void	ft_printfpoint(void *n, int *len)
{
	ft_printfstr("0x", len);
	ft_printfhexa((unsigned long long)n, len, 'x');
}
