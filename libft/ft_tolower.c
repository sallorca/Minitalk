/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:48:46 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/03 14:06:30 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

/*int main()
{
  
    // Character to be converted to lowercase
    char ch = 'G';
  
    // convert ch to lowercase using toLower()
    printf("%c in lowercase is represented as = %c\n", ch, ft_tolower(ch));
  
    return 0;
}*/