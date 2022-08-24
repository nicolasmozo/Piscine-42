/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:47:36 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/16 11:24:03 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int i;

	while(i <size)
	{
		swap = tab[i];
		tab[i] = tab [size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
	for( int j = 0; j < 6; j++)
	{
		printf("%d",tab[j]);
	}
}

int main()
{
	int arr[6] = {5,4,3,2,1,1};
	
	int* ptr;
	ptr = arr;

	ft_rev_int_tab(ptr,6);

}
