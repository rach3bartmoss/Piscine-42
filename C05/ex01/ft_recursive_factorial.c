/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:51:16 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 21:00:51 by dopereir         ###   ########.fr       */
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
		str ++;
	}
	return (sign * result);
}

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res = nb * (ft_recursive_factorial(nb - 1));
		nb = nb - 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	int	j;

	j = ft_atoi(argv[1]);

	printf("%i\n", ft_recursive_factorial(j));
	return (0);
}
*/
