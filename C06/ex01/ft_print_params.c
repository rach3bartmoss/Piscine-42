/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:10:08 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/28 12:33:44 by dopereir         ###   ########.fr       */
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

	x = 1;
	i = 0;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			put_char(argv[x][i]);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
