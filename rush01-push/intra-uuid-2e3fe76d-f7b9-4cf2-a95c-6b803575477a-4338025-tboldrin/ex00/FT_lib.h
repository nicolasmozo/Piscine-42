/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboudigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:53:06 by uboudigu          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:09 by uboudigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_check_argc(int argc, char **argv);
int		**ft_init_tab(char *str);
int		**ft_tab_nul(int **tab);
void	ft_init_border(int **tab, char *str);
int		ft_valid_border(int **tab);
int		ft_backtrack(int **tab, int pos);
int		ft_check_double(int **tab, int pos, int value);
int		ft_check_double_up(int **tab, int pos, int value);
int		ft_check_double_left(int **tab, int pos, int value);
int		ft_check_valid(int **tab);
int		ft_checkborder_down(int **tab, int col);
int		ft_checkborder_up(int **tab, int col);
int		ft_checkborder_right(int **tab, int row);
int		ft_checkborder_left(int **tab, int row);
void	ft_print_table(int **tab);
void	ft_free_malloc(int **tab);
#endif
