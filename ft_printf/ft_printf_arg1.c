/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:02:14 by sallorca          #+#    #+#             */
/*   Updated: 2022/11/25 18:03:54 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfchar(char s, int *len)
{
	write(1, &s, 1);
	(*len)++;
}

void	ft_printfstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (s == NULL)
		ft_printfstr("(null)", len);
	else
	{
		while (s[i])
		{
			ft_printfchar(s[i], len);
			i++;
		}
	}
}

void	ft_printfnbr(int n, int *len)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_printfstr("-2147483648", len);
		else
		{
			n *= -1;
			ft_printfchar('-', len);
		}	
	}
	if (n > 9)
	{
		ft_printfnbr(n / 10, len);
		ft_printfnbr(n % 10, len);
	}
	else if (n <= 9 && n >= 0)
	{
		ft_printfchar(n + 48, len);
	}
}

void	ft_printfunsing(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_printfunsing(n / 10, len);
		ft_printfunsing(n % 10, len);
	}
	else if (n <= 9)
		ft_printfchar(n + 48, len);
}

/*int	main(void)
{
	int len;
	char *s;

	s = "HOLA QUE TAL";
	len = printf("original: %d\n %c\n %s\n", 123, 'a', "hola caracola");
	printf("longitud: %d\n", len);
	len = ft_printf("miprintf: %d\n %c\n %s\n", 123, 'a', "hola caracola");
	printf("longitud: %d\n", len);
	len = printf("original: %i\n %u\n %%\n %p\n", 123, -4, &s[2]);
	printf("longitud: %d\n", len);
	len = ft_printf("miprintf: %i\n %u\n %%\n %p\n", 123, -4, &s[2]);
	printf("longitud: %d\n", len);
	len = printf("original: %x\n %X\n", 1234, 5678);
	printf("longitud: %d\n", len);
	len = ft_printf("miprintf: %x\n %X\n", 1234, 5678);
}*/
