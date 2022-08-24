/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:53:34 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:35 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_lib.h"

int	**ft_init_tab(char *str)
{
	int	i;
	int	**tab;

	tab = malloc(6 * sizeof (int *));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof (int *));
		if (!tab)
			return (NULL);
		i++;
	}
	ft_tab_nul(tab);
	ft_init_border(tab, str);
	return (tab);
}

int	**ft_tab_nul(int **tab)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_init_border(int **tab, char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 1;
	while (a < 31)
	{
		if (a < 7)
			tab [0][i] = str[a] - '0';
		else if (a < 15)
			tab [5][i] = str[a] - '0';
		else if (a < 23)
			tab [i][0] = str[a] - '0';
		else if (a < 31)
			tab [i][5] = str[a] - '0';
		i++;
		if (i % 5 == 0)
			i = 1;
		a += 2;
	}
}
