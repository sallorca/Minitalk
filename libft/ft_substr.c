/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:28:03 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/05 18:22:37 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	st;
	char	*sub;

	st = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && st < len)
	{
		sub[st] = s[start];
		st++;
		start++;
	}
	return (sub);
}

/*int main (void) 
{
        char *var = "abcdef";
        char buffer[6]="";
    //UTILIZANDO strncpy Y strcpy
    printf("%s\n", strncpy(buffer, &var[2], 3));    //devuelve "cde"
    printf("%s\n", strcpy(buffer, &var[2]));    //devuelve "cdef"
 
    //Utilizando tu propuesta
    var = ft_substr("abcdef", 2, 3);
    printf("%s\n", var);    //devuelve "cde"
    free(var);
 
    var = ft_substr("abcdef", 2, 4);
    printf("%s\n", var);    //devuelve "cdef"
    free(var);
    return 0;
 
}*/