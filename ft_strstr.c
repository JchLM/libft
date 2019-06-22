/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:50:54 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/09 16:52:13 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int tmp;

	i = -1;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[++i])
	{
		tmp = i;
		j = 0;
		while (little[j])
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
