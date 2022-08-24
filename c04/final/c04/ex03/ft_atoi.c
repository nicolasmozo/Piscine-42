/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:40:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/21 10:00:59 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	final;

	i = 0;
	j = 0;
	final = 0;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
	{	
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10 + str[i] - 48;
		i++;
	}
	if ((j % 2) != 0)
		final = final * -1;
	return (final);
}
/*#include <stdio.h>
// \t tab , \r return, \n newline, \f formatted, \v vertical tab. 
int main()
{
	char a [] = "---+-+1234ab567";
	printf("%d",ft_atoi(a));
}*/
