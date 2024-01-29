/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:10:04 by dopereir          #+#    #+#             */
/*   Updated: 2024/01/16 20:54:34 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	end;
	int	start;

	start = 0;
	end = size -1;
	while (start < end) 
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}
/*int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};//array elements

	int n = sizeof(arr) / sizeof(arr[0]);
// calculates the size of array with sizeof

	ft_rev_int_tab(arr, n);
// reverse de array declared in main by the function in void

	printf("reversed array is:%d %d %d %d %d %d\n",
       	arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	return (0); //arr[x] are the locations in index

}
*/
