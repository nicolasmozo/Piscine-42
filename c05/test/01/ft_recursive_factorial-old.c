/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:53:26 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/21 19:56:47 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int	factorial;

	//factorial = 1;
//	if (nb < 0)
//		return (0);
//	if (nb == 0 || nb == 1)
//		return (1);
	
	if (nb =!0)
		return nb  * ft_recursive_factorial( nb % 10 );
	return (factorial);
}
#include <stdio.h>
int main() 
{
	int a = 12345;
	printf("%d",ft_recursive_factorial(a));
}
