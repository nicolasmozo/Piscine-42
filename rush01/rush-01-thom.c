/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01-thom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:32:57 by tboldrin          #+#    #+#             */
/*   Updated: 2022/08/21 16:21:10 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void grid(int arg);

int	ft_len(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		i++ ;
	}
	return (i);
}

int	**fill_array(char *str)
{
	int**	tab;
	
	int	i;
	int	a;
	int	n;

	tab = (int**)malloc(4*sizeof(int*));
	i = 0;
	while (i < 1)
	{
		tab[i] = (int*)malloc(4*sizeof(int*));
		a = 0;
		n = 4;
		while (a < n)
		{
			if (a % 2 == 0)
			{
				tab[i][a % 4] = str[((i * 8) + a)] - 48;
				if (tab[i][a % 4] == 1  || tab[i][a % 4] == 4)
					grid(tab[i][a % 4]);
		//printf("%d",tab[i][a%4]);
			}
			else
				n++ ;
			a++ ;
		}
		i++ ;
	//printf("\n");
	}
	return (tab);
}

int	check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if ((str[i] <= '0') || (str[i] > '4'))
				return (1);
		}
		else
		{
			if (str[i] != ' ')
				return (1);
		}
		i++ ;
	}
	if ((i + 1)/2 == 16)
		fill_array(str);
	return (0);
}

int	main(int argc, char *argv[])
{
	grid(0);

	if (argc == 2)
	{
		check(argv[1]);
	}
	return (0);
}
