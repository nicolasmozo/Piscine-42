/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:53:19 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:21 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_lib.h"

int	ft_check_argc(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 4 * 8 -1)
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
			return (0);
		if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_valid_border(int **tab)
{
	int	j;

	j = 1;
	while (j < 5)
	{
		if (tab[0][j] + tab [5][j] < 3 || tab[0][j] + tab[5][j] > 5)
			return (0);
		if (tab[j][0] + tab [j][5] < 3 || tab[j][0] + tab[j][5] > 5)
			return (0);
		j++;
	}
	return (1);
}

void	ft_free_malloc(int **tab)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	int	**tab;

	if (ft_check_argc(argc, argv) == 0)
	{
		write (2, "Error\n", 6);
		return (-1);
	}
	tab = ft_init_tab(argv[1]);
	if (!tab)
		return (-1);
	if (ft_valid_border(tab) == 0)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (ft_backtrack(tab, 0) == 1)
		ft_print_table(tab);
	else
		write(2, "Error\n", 6);
	ft_free_malloc(tab);
	return (0);
}
