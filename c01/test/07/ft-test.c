/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:47:36 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/14 20:47:18 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int rev[size];
	int i = 0;

	while(!(*tab++ < 0))
	{
		rev[i++] = tab[size--];
	}
		printf("%d",rev);
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	
	int* ptr;
	ptr = arr;

	ft_rev_int_tab(ptr,5);

}
