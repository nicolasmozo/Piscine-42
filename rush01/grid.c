/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:07:11 by tboldrin          #+#    #+#             */
/*   Updated: 2022/08/21 17:24:27 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*int	ft_len(char *str)
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

int	ft_atoi(char nbr)
{
	return (nbr - 48);
}*/

int grid( int arg)
{
	int  tab[4][4];
    
      int i;
      int a;
      int n;
      int tab;
      
     //tab = (int**)malloc(4*sizeof(int*));
     i = 0;
     while (i < 4)
     {
        // tab[i] = (int*)malloc(4*sizeof(int*));
         a = 0;
         n = 4;
         while (a < n)
        {
             if (arg == 1)//|| arg == 4)
             {
                
                tab[i][a % 4] = 4;
				printf(tab[i][a % 4]);
                
             }
             else if (arg == 4)
             	tab[i][a % 4] = 1;
				printf(tab[i][a % 4]);
             else
             	tab[i][a % 4] = 0;
				printf(tab[i][a % 4]);
            
			n++ ;
            a++ ;
        }
         i++ ;
     	//printf("\n");
     }

     for (int i = 0; i < 5; i++)
     	for (int j = 0; j < 5; j++)
     		printf("%d", tab[i][j]);
     		i++;
     		j++;
     	
     //return (tab);

}
/*
int	main(int argc, char *argv[])
{
	test();
	//if (argc == 2)
	//	test(argv[1]);
	return (0);
}*/
