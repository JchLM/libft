/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:48:44 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/06 19:49:21 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	ret;

	ret = ft_strlen(src);
	index = 0;
	while (dst[index] && index < size)
		index++;
	ret += ((index < size) ? index : size);
	if ((int)(size - ft_strlen(dst) - 1) > 0)
		ft_strncat(dst, (char *)src, size - ft_strlen(dst) - 1);
	return (ret);
}
