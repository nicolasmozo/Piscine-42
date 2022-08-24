/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:34:41 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/23 16:42:44 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int nb)
{
	int	i;

	i = 3;
	while (nb % i != 0)
	{
		i = i + 2;
		if (i > nb / 3)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	if (prime(nb) == 1)
		return (nb);
	while (prime(nb) == 0)
		nb = nb + 2;
	return (nb);
}
/*// prime number is only divisible by itself & 1
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(4));
}*/
