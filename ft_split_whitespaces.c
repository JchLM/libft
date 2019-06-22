/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:47:55 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 18:20:38 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_is_space(char c)
{
	return (c == 32 || c == '\t' || c == '\n' || c == '\0');
}

static	int		ft_words_count(char *str)
{
	int words;
	int i;

	words = 0;
	i = -1;
	while (str[++i])
	{
		if (!ft_is_space(str[i]) && ft_is_space(str[i - 1]))
			words++;
	}
	return (words);
}

static	int		ft_word_size(char *str)
{
	int len;

	len = -1;
	while (!ft_is_space(str[++len]))
		;
	return (len);
}

char			**ft_split_whitespaces(char *str)
{
	int		i;
	int		col;
	int		line;
	char	**ret;

	i = -1;
	col = -1;
	if (!(ret = (char **)malloc(sizeof(char *) * ft_words_count(str) + 1)))
		return (0);
	ret[ft_words_count(str)] = 0;
	while (str[++i])
	{
		if (!ft_is_space(str[i]) && ft_is_space(str[i - 1]))
		{
			col++;
			line = 0;
			if (!(ret[col] = (char *)malloc(sizeof(char)
							* ft_word_size(str + i) + 1)))
				return (0);
			ret[col][ft_word_size(str + i)] = '\0';
		}
		if (!ft_is_space(str[i]))
			ret[col][line++] = str[i];
	}
	return (ret);
}
