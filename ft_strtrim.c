/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:17:17 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 18:25:09 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s_cpy;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > i)
		j--;
	if (j < i || !*s)
		return (ft_strnew(0));
	if (!(s_cpy = ft_strnew(j - i + 1)))
		return (NULL);
	k = -1;
	while (i <= j)
	{
		s_cpy[++k] = s[i];
		i++;
	}
	s_cpy[k + 1] = '\0';
	return (s_cpy);
}
