/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:06:02 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/25 02:07:35 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		return(0);
	}
	char	c;

	c = ft_putchar(argv[1]);
}
*/
/*
int	main()
{
	char	*c;
	char	*b;

	c = "Rache ";
	b = "Bartmoss";

	ft_putstr(c);
	ft_putstr(b);

	return (0);
}
*/
