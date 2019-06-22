/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:35:51 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 16:44:42 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = (unsigned char*)s;
	while (n--)
	{
		if (*s_cpy != (unsigned char)c)
			s_cpy++;
		else
			return (s_cpy);
	}
	return (NULL);
}
