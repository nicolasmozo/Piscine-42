/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:01:37 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/14 14:19:23 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}

int main(void)
{
	int a,b,div,mod;
	a = 20;
	b = 2;
	div = 0;
	mod = 0;
	ft_div_mod(a,b,&div,&mod);
	printf("div : %d, mod : %d\n", div, mod);
}
