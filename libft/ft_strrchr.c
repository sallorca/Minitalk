/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:31:02 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/27 19:04:56 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * funciomque busca la primeraaparicion de 'c',desde el final del string
 * (s + 1) es lo mismo que poner &s[i], es busccar la posicion de 'c', si existe.
 */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
					i--;
	}
	return (NULL);
}

/*int main() 
{
    const char *s = "hola";
    char  c;
   
    c = 'a';
    printf("Found letter:%c\n", *ft_strrchr(s, c));
    ft_strchr(str, c);
    return (0);
}*/