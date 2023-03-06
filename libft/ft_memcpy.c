/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:31:54 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/30 11:46:30 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int main ()
{
   const char src[50] = "http://www.w3cschool.cc";
   char dst[50] = "hola";

   printf("Before memcpy dst = %s\n", dst);
   ft_memcpy(dst, src, ft_strlen(dst) + 1);
   printf("After memcpy dst = %s\n", dst);
   
   return(0);
}*/