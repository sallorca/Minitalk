/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:52:45 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/26 18:16:22 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isdigit - check for a digit (0 through 9)

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// Funcion que retorna, en la cual le dice que C es mayor que 0 y menor que 9.
// Es una funcion int, y sirve para checkear si que es un digito o no.
// Usamos la libreria para simplificar el codigo
// y no tener que usar el return (1)/return (0).
