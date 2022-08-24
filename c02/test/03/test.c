/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:36:23 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/16 16:12:02 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
		
		int		i;
		
		i = 0;
		while(str[i])
	    {
			if(str[i] == '\0')
			{
				return(1);
			}
			if(!(str[i] >= '0' && str[i] <= '9'))
			{
				return (0);
			}
			i++;
		}
		return (1);
}

int main(void)
{
	printf("%d",ft_str_is_numeric("123a"));

}
