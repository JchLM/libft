/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:36:37 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/06 17:59:02 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tab;
	char	*tab2;

	tab = (char*)dst;
	tab2 = (char*)src;
	i = 0;
	while (i < n)
	{
		tab[i] = tab2[i];
		i++;
	}
	return (dst);
}
