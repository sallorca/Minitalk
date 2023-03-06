/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:55:54 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/27 18:13:59 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 	function copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

/*int	main()
{
	char str1[] = "patata";
	char str2[] = "hola";
	printf("desp aplicar strlcpy: %zu  %s\n", ft_strlcpy(str1, str2, 6), str1);
	printf("desp aplicar strlcpy: %zu  %s\n", strlcpy(str1, str2, 6), str1);
}*/