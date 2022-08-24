/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:50:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/21 11:28:21 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_linepopulate(int x, int y, int i, int j, int arg);

void	grid(int arg)
{
	int	x;
	int	y;
	int	i;
	int	j;

	i = 0; // itirator of height
	j = 0; // itirator of lenght 
	x = 4; // height
	y = 4; // lenght
	if (x > 0) // grid must have at least one value
	{
		while (y > i) 
		{
			while (x > j)
			{
				ft_linepopulate(x, y, i, j, arg); // function to fill the grid
				j++;
			}
			j = 0;
			i++;
			ft_putchar('\n');
		}
	}
}

void	ft_linepopulate(int x, int y, int i, int j, int arg)
{
	if (i == 0) // if on the first row
	{
		if ((j == 0) && (arg == 1)) // if on the first column AND arg is 1
			ft_putchar('4');
		else if ((j == x - 1) && (arg == 4)) // if on last column AND arg is 4
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	else if(i == y - 1) // if on last row
	{
		if ( (j == x - 1) && (arg == 4)) // if on last column AND arg is 4
			ft_putchar('4');
		else
			ft_putchar('0');
	}
	else if(i == 1) // if on second row
	{
		if (/*j == 0 ||*/ j == x - 1 && arg == 4) // if on last column AND arg is 4
			ft_putchar('2');
		else 
			ft_putchar('0');
	}
	else if(i == 2) // if on third row 
	{
		if (j == x - 1 && arg == 4) // if on last column AND arg is 4
			ft_putchar('3');
		else 
			ft_putchar('0');
	}
}
