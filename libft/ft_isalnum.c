/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:11:05 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/22 14:04:17 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ft_isalnum -checks for an alphanumeric character
 */

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
