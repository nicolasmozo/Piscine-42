/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:34:41 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/22 17:42:51 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (2);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(4));
}*/
