/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:33:55 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/25 00:26:06 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	h;
	int	n;

	h = 0;
	n = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[h] != '\0')
	{
		while (str[h + n] == to_find[n] && to_find[n] != '\0')
			n++;
		if (!to_find[n])
			return (str + h);
		n = '\0';
		h++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 0)
		return(0);
	printf("%s\n", ft_strstr(argv[1], argv[2]));
}
*/
