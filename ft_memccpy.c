/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:36:24 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/05 15:36:25 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;
	unsigned char	*tab2;

	tab = (unsigned char*)dest;
	tab2 = (unsigned char*)src;
	i = 0;
	while (n > 0)
	{
		tab[i] = tab2[i];
		if (tab2[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
