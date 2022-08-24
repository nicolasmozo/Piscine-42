/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/14 11:34:32 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char	b;

	b = '0' + a;
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a <= 99)
	{
		b = a + 1;
		a++;
		while (b < 99)
		{
			b++;
			print(a / 10);
			print(a % 10);
			write(1, " ", 1);
			print(b / 10);
			print(b % 10);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
