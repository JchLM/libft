/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:41:59 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/06 19:48:39 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = -1;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[++i] && i < len)
	{
		tmp = i;
		j = 0;
		while (little[j] && tmp < len)
		{
			if (big[tmp] == little[j])
			{
				j++;
				tmp++;
				if (little[j] == '\0')
					return ((char*)big + tmp - j);
			}
			else
				break ;
		}
	}
	return (0);
}
