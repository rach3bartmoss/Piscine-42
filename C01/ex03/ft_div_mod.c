/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:40:10 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/15 19:40:21 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	result_div, result_mod;
	int a = 10;
	int b = 2;

	ft_div_mod(a, b, &result_div, &result_mod);

	printf("division: %i\n", result_div);
	printf("modulo: %i\n", result_mod);
	return (0);

}
*/
