/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:32:21 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/05 15:32:22 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((char)c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i])
	{
		if (c == s[i])
			return ((char*)s + i);
		else
			i++;
	}
	return (NULL);
}
