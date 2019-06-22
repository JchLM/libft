/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:07:35 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 18:24:51 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	int		end;
	char	**dst;

	i = 0;
	j = 0;
	dst = NULL;
	if (!s || !(dst = ft_memalloc(sizeof(char*) *
				(ft_countwords(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
			dst[j++] = ft_strsub(s, start, (end - start));
	}
	dst[j] = NULL;
	return (dst);
}
