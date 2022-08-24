/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifborder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:53:47 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:50 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_lib.h"

int	ft_check_valid(int **tab)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (ft_checkborder_up(tab, i) == 0
			|| ft_checkborder_down(tab, i) == 0
			|| ft_checkborder_right(tab, i) == 0
			|| ft_checkborder_left(tab, i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkborder_down(int **tab, int col)
{
	int	goal;
	int	view;
	int	max;
	int	i;

	view = 0;
	i = 4;
	max = 0;
	goal = tab[col][5];
	while (i >= 1)
	{
		if (tab[col][i] > max)
		{
			max = tab[col][i];
			view++;
		}
		i--;
	}
	if (view != goal)
		return (0);
	return (1);
}

int	ft_checkborder_up(int **tab, int col)
{
	int	goal;
	int	view;
	int	max;
	int	i;

	view = 0;
	i = 1;
	max = 0;
	goal = tab[col][0];
	while (i <= 4)
	{
		if (tab[col][i] > max)
		{
			max = tab[col][i];
			view++;
		}
		i++;
	}
	if (view != goal)
		return (0);
	return (1);
}

int	ft_checkborder_right(int **tab, int row)
{
	int	goal;
	int	view;
	int	max;
	int	i;

	view = 0;
	i = 4;
	max = 0;
	goal = tab[5][row];
	while (i >= 1)
	{
		if (tab[i][row] > max)
		{
			max = tab[i][row];
			view++;
		}
		i--;
	}
	if (view != goal)
		return (0);
	return (1);
}

int	ft_checkborder_left(int **tab, int row)
{
	int	goal;
	int	view;
	int	max;
	int	i;

	view = 0;
	i = 1;
	max = 0;
	goal = tab[0][row];
	while (i <= 4)
	{
		if (tab[i][row] > max)
		{
			max = tab[i][row];
			view++;
		}
		i++;
	}
	if (view != goal)
		return (0);
	return (1);
}
