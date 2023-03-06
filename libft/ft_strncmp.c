/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:54:45 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/27 18:02:29 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	return (0);
}
