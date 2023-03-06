/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:40:24 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/10 17:04:22 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	w;

	i = 0;
	count = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && w == 0)
		{
			w = 1;
			count = count + 1;
		}
		else if (s[i] == c)
			w = 0;
		i++;
	}
	return (count);
}

static	int	count_len(char *s, int *i, char c)
{
	int	len;
	int	j;

	len = 0;
	while (s[*i] == c && s[*i])
		*i += 1;
	j = *i;
	while (s[j] && s[j] != c)
	{
		j++;
		len++;
	}
	return (len);
}

static	int	w_word(char *s, char **p, int *i, char c)
{
	int		wordsize;
	int		k;
	int		q;
	char	*word;

	wordsize = count_len(s, i, c);
	q = 0;
	while (wordsize != 0)
	{
		word = (char *)ft_calloc(sizeof(char), (wordsize + 1));
		if (!word)
			return (1);
		k = 0;
		while (k < wordsize)
		{
			word[k++] = s[*i];
			*i = *i + 1;
		}
		word[k] = '\0';
		p[q] = word;
		q++;
		wordsize = count_len(s, i, c);
	}
	p[q] = NULL;
	return (0);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	char	**str;
	int		j;
	int		error;

	if (!s)
		return (NULL);
	i = count_word(s, c);
	str = (char **)ft_calloc(sizeof(char *), i + 1);
	if (!str)
		return (NULL);
	j = 0;
	error = w_word((char *)s, str, &j, c);
	if (error)
	{
		j = 0;
		while (str[j])
		{
			free(str[j]);
			j++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}
