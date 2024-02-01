/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:45:12 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 14:06:45 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 0;
	x = argc - 1;
	while (x > 0)
	{
		i = 0;
		while (argv[x][i])
		{
			put_char(argv[x][i]);
			i++;
		}
		write(1, "\n", 1);
		x--;
	}
	return (0);
}
