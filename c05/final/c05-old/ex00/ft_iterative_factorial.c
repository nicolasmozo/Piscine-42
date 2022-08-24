/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:32:43 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/21 20:31:54 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;

	ft = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
		ft *= nb;
		nb = nb - 1;
		}
	}
	return (ft);
}
/*#include <stdio.h>
int main() 
{
	printf("%d",ft_iterative_factorial(-21));
}*/
