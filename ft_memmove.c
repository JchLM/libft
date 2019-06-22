/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:35:05 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/06 18:34:14 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (dest_cpy > src_cpy)
	{
		dest_cpy = dest_cpy + n;
		src_cpy = src_cpy + n;
		while (n--)
			*--dest_cpy = *--src_cpy;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
