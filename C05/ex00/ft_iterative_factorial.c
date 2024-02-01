/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:35:07 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 17:21:51 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
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

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb --;
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
	int	x;

	x = ft_atoi(argv[1]);

	printf("%i\n", ft_iterative_factorial(x));
	return (0);
}
*/
