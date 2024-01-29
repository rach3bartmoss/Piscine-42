/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:12:55 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/20 18:51:36 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return (*s1 - *s2);
	}
	return (0);
}
/*
int	main()
{
	char	*s1 = "abraCadabra";
	char	*s2 = "abracadabra";
	char	*s3 = "nomad";
	char	*s4 = "nomad";

	int	n = 7;
	int	m = 5;

	int result1 = ft_strncmp(s1, s2, n);
	int result2 = ft_strncmp(s3, s4, m);

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
