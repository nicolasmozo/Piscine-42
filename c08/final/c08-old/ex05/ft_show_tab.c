/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:57:28 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/28 14:15:30 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	putnbr(int nb)
{
	int	arr[11];
	int	i;

	if (nb == 0)
		ft_putchar('0');
	i = 0;
	while (nb > 0)
	{
		arr[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(arr[i]);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr (par[i].str);
		ft_putchar ('\n');
		putnbr (par[i].size);
		ft_putchar ('\n');
		putstr (par[i].copy);
		ft_putchar ('\n');
		i++;
	}
}
/*int main(int ac, char **av)
{
    //char s[100] = "abcdefg";
    ft_show_tab(ft_strs_to_tab(ac, av));
}*/
