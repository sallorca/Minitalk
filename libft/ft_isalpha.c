/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:33:56 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/26 13:28:33 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isalpha - checks for an alphabetic character
 */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// Usamos un return, en el que decimos que "c" es mayor que 'a' y 'A' y "c" 
// es menor que 'z' y 'Z'.
// Al ser una función int, nos devuelve un dígito.

/*int main()
{
	int a;

	a = ft_isalpha('a');
	printf("resultado:%d\n", a);
	a = ft_isalpha('A');
	printf("resultado:%d\n", a);
	a = ft_isalpha('1');
	printf("resultado:%d\n", a);

	printf("la funcion me dice que: %d\n", ft_isalpha('a'));
}*/