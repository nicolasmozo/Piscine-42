/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:53:10 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/22 08:42:34 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power != 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*#include <stdio.h>
int main() 
{
	printf("%d",ft_iterative_power(5,5));
}*/
