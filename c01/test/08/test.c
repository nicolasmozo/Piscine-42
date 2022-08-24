/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:12:21 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/15 11:28:16 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j;
	int swap;
	while( i < size)
	{
		 j = i +1;
		while (j < size)
		{
				if (tab[i] > tab[j])
				{
					swap = tab[i];
					tab[i] = tab[j];
					tab[j] = swap;
				}
				j++;
		}
		i++;
	}

	for( int j = 0; j< size ; j++)
	{
		printf("%d",tab[j]);
	}
}


int main()
{
	int arr[10] = {5,4,3,2,1,5,4,2,1,7};

	int* ptr;
	ptr = arr;

	ft_sort_int_tab(ptr,10);
}
