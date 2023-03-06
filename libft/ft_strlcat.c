/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:19:45 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/22 18:28:52 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * functions copy and concatenate strings with
 * the same input parameters and output result as snprintf
 * appends string src to the end of dst
 * functions return the total
 * length of the string they tried to create.
 */

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	lens;
	size_t	lend;

	lens = ft_strlen(src);
	lend = ft_strlen(dest);
	j = 0;
	if (destsize <= lend)
		return (destsize + lens);
	i = lend;
	while (src[j] != '\0' && i + 1 < destsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lens + lend);
}
