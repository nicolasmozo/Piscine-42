/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:53:26 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:30 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_table(int **tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(tab[i / 4 + 1][i % 4 + 1] + '0');
		if ((i + 1) % 4 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}
