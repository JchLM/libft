/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:05:32 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/03 18:03:16 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	power;

	power = 1;
	if (nb <= 0)
		return (0);
	while (power * power < nb && power < 46340)
		power++;
	if (power * power == nb)
		return (power);
	return (0);
}
