/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:29:55 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/27 18:25:18 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * function locates the first occurrence of c (converted to a
 * char) in the string pointed to by s
 */

char	*ft_strchr(const char *s, int c)
{	
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

/*int main() 
{
    const char *s = "heea";
    char  c;
   
    c = 'e';
    printf("Found letter:%c\n", *strchr(s, c));
    ft_strchr(s, c);
    return (0);
}*/