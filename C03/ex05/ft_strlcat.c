/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:13:05 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/24 21:01:26 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	src_index;

	d_len = strlen(dest);
	s_len = strlen(src);
	offset = d_len;
	src_index = 0;
	while (src[src_index] != '\0' && offset + 1 < size)
	{
		dest[offset] = src[src_index];
		offset++;
		src_index++;
	}
	dest[offset] = '\0';
	return (d_len + s_len);
}
/* d_len assignment , obtain initial sizes
 OFFSET = d_len , get the end of dest, refers to the dist btw the start
 mem address of a  array and the memory adderess of a 
 specific element in array
 src_index = 0 , append src, it is; add in end of source
*/
/*
int	main()
{
	char	destino[50] = "Rache ";
	char	source[50] = "Bartmoss.";

	printf("Before ft_strlcat: %s\n", destino);

	int	result = ft_strlcat(destino, source, sizeof(destino));

	printf("After ft_strlcat: %s\n", destino);
	printf("Length of concatenated string: %u\n", result);
	return (0);
}
*/
