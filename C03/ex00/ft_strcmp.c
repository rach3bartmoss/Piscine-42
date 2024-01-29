/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:34:18 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/20 20:06:20 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main()
{
	const char *s1 = "inteRlinked!";
	const char *s2 = "interlinked!";
	const char *s3 = "gosling";
	const char *s4 = "gozling";
	
	int result2 = ft_strcmp(s3, s4);
	int result1 = ft_strcmp(s1, s2);
	
	if (result1 < 0)
	{
		printf("s1 is smaller than s2\n");
	} 
	else if (result1 > 0)
	{
		printf("s1 is greater than s2\n");
	} 
	else
	{
		printf("s1 is equal to s2\n");
	}

	printf("Value returned by strcmp(s1, s2): %d\n", result1);

	if (result2 < 0)
	{
		printf("s3 is smaller tha s4\n");
	}
	else if (result2 > 0)
	{
		printf("s3 is greater than s4\n");
	}
	else
	{
		printf("s3 is equal to s4\n");
	}

	printf("Value returned by strcmp(s3, s4): %d\n", result2);
	return 0;
}
*/
