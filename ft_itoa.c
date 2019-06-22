/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:50:25 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 18:18:32 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_len(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n >= 10 || n <= -10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_len(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[0] = '-';
	if (n < 0)
		n = -n;
	len--;
	while (n >= 10)
	{
		str[len--] = (n % 10) + '0';
		n = n / 10;
	}
	str[len] = n + '0';
	return (str);
}
