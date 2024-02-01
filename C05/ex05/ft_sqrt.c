/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:40:59 by dopereir          #+#    #+#             */
/*   Updated: 2024/02/01 17:11:38 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	q;

	if (nb < 0)
	{
		return (0);
	}
	q = 0;
	while (q * q < (unsigned int) nb)
	{
		q++;
	}
	if (q * q == (unsigned) nb)
	{
		return (q);
	}
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(2147395600));
}
*/
