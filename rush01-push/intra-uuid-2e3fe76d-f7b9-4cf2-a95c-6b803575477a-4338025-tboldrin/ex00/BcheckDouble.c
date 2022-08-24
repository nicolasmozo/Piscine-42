/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BcheckDouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:52:54 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:00 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_lib.h"

int	ft_backtrack(int **tab, int pos)
{
	int	value;

	if (pos == 16 && ft_check_valid(tab) == 1)
		return (1);
	else
	{
		value = 1;
		while (value <= 4)
		{
			if (ft_check_double(tab, pos, value) == 0)
			{
				tab[pos / 4 + 1][pos % 4 + 1] = value;
				if (ft_backtrack(tab, pos + 1) == 1)
					return (1);
			}
			value++;
		}
	}
	return (0);
}

int	ft_check_double(int **tab, int pos, int value)
{
	if ((ft_check_double_up(tab, pos, value) == 1)
		|| (ft_check_double_left(tab, pos, value) == 1))
		return (1);
	return (0);
}

int	ft_check_double_left(int **tab, int pos, int value)
{
	int	i;

	i = 1;
	if (pos == 0)
		return (0);
	while (i < pos / 4 + 1)
	{
		if (tab[i][pos % 4 + 1] == value)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_double_up(int **tab, int pos, int value)
{
	int	i;

	i = 1;
	if (pos == 0)
		return (0);
	while (i < pos % 4 + 1)
	{
		if (tab[pos / 4 + 1][i] == value)
			return (1);
		i++;
	}
	return (0);
}
