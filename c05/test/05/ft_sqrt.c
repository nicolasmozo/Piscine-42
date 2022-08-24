/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:45:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/22 14:20:31 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	c;
	long int	sqrt;

	c = 1;
	sqrt = 0;
	if (nb == 1)
		return (1);
	while (c < nb)
	{
		sqrt = c * c;
		if (sqrt == nb)
			return (c);
		c++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(9));
}*/
