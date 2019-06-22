/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:31:14 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/05 15:31:16 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
