/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/12 12:33:34 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	char	d;
	char	e;
	char	f;

	d = (char)a + 48;
	e = (char)b + 48;
	f = (char)c + 48;
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (a != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (!(a > 9))
	{
		while (!(b > 9))
		{
			while (!(c > 9))
			{
				if (a != b && b != c && a != c)
				{
					print(a, b, c);
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}
