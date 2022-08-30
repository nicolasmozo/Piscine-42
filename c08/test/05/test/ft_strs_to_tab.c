/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:48:18 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/28 12:56:30 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char *replicate(char *str, int size)
{
    int     i;
    char *ptr;
    
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

int len(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    int i;
    
    tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        tab[i].str = av[i];
        tab[i].size = len(av[i]);
        tab[i].copy = replicate(av[i], tab[i].size);
    }
    tab[i].size = 0;
    tab[i].str = 0;
    tab[i].copy = 0;
    
    return (tab);
}
