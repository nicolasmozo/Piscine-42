/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:57:28 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/28 13:56:21 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
char	*replicate(char *str, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = len(av[i]);
		tab[i].copy = replicate(av[i], tab[i].size);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}

void putnbr(int nb)
{
    int arr[11];
    int i;
    
    if(nb == 0)
        ft_putchar('0');
    i = 0;
    while (nb > 0)
	{
	    arr[i] = nb % 10 + '0';
	    nb /= 10;
	    i++;
	}
	while (--i >= 0)
	{	
		ft_putchar(arr[i]);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
    int     i;

    i = 0;
    while (par[i].str != 0) 
    {
        putstr(par[i].str);
        ft_putchar('\n');
        putnbr(par[i].size);
        ft_putchar('\n');
        putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}

int main(int ac, char **av)
{
    //char s[100] = "abcdefg";
    ft_show_tab(ft_strs_to_tab(ac, av));
}
