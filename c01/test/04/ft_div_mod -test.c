/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:01:37 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/14 17:16:50 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int *a, int *b)
{
		int aux;

		aux = *a;
		*a = *a / *b;
		*b = aux % *b;
}

int main(void)
{
	int	x,y;
	x =21;
	y =2;

	int *a, *b;
	a = &x;
	b = &y;
	ft_div_mod(a,b);
	printf("div : %d, mod : %d", *a, *b);
}
