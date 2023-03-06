/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:28:15 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/13 14:00:48 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		len = 1;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*str;
	long	num;

	num = (long)n;
	nlen = ft_len(n);
	str = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		str[nlen] = (num % 10) + '0';
		num /= 10;
		nlen--;
	}
	return (str);
}
