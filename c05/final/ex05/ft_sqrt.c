/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:45:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/23 12:20:44 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	c;
	long long	sqrt;

	c = 1;
	sqrt = 0;
	if (nb < 1)
		return (0);
	while (c * c != nb)
	{
		//sqrt = c * c;
		if (c > 46340)
			return (0);
		c++;
	}
	return (c);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(6));
}
