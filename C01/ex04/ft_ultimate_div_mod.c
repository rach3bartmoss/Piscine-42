/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:37:08 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/18 04:09:01 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a = 15;
	int	b = 4;
	int	div, mod;

	ft_ultimate_div_mod(&a , &b);

	div = a;
	mod = b;

	printf("division result: %i\n", div);
	printf("modulo: %i\n", mod);
	return (0);
}
*/
