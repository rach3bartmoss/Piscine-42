/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:31:10 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 20:33:58 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	res;

	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power --;
	}
	if (power < 0)
	{
		return (0);
	}
	return (res);
}
