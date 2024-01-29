/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:26:09 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/18 00:02:25 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab [count] > tab[count + 1])
		{
			swap = tab[count];
			tab [count] = tab [count + 1];
			tab [count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}
/*
int	main(void)
{
	int arr[] = { 10, 20, 77, 45, 7, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Array before sorting: ");
	
	for (int i = 0; i < size; i++)
	{
	       	printf("%d ", arr[i]);
	}
	
	ft_sort_int_tab(arr, size);
	
	printf("\nArray after sorting in ascending order: ");
	
	for (int i = 0; i < size; i++) 
	{
	       	printf("%d ", arr[i]);
	}
	return (0);
}
*/
