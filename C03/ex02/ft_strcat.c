/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:53:34 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/25 00:28:16 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s", ft_strcat(argv[1], argv[2])); 
	}
}
*/
/*
int	main(void)
{
	char	s1[50] = "within cells, ";
	char	s2[50] = "interlinked.";

	ft_strcat(s1, s2);

	printf("result of concatenate string: %s\n", s1);
	return (0);
}
*/
