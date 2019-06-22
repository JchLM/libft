/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:38:47 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 16:52:36 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		neg;
	int		i;

	result = 0;
	neg = 1;
	i = 0;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == '\f' ||
				str[i] == '\r' || str[i] == ' ' || str[i] == '\v') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)result * neg);
}
