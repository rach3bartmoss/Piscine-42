/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:43:11 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 20:59:30 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		str++;
	}
	return (sign * result);
}

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
	{
		res = nb *(ft_recursive_power(nb, power - 1));
		power --;
	}
	if (power < 0)
	{
		return (0);
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	int	j;
	int	k;

	j = ft_atoi(argv[1]);
	k = ft_atoi(argv[2]);

	printf("%i\n", ft_recursive_power(j, k));
	return (0);
}
*/
