/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:12:06 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/06 18:08:07 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(*d) * (ft_strlen(s1)) + (ft_strlen(s2) + 1));
	if (d == NULL)
		return (NULL);
	while (*s1 != '\0')
		d[i++] = *s1++;
	while (*s2 != '\0')
		d[i++] = *s2++;
	d[i] = '\0';
	return (d);
}
