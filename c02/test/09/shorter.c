/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:35:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/17 20:38:41 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	first_check(char str)
{
	if (!(str >= 'a' && str <= 'z'))
	   return (1);
	else if (!(str >= 'A' && str <= 'Z'))
		return (1);
	else if (!(str >= '0' && str <= '9'))
	   return (1);
	return (0);
}

int second_check(char str)
{
	if(str >= 'a' && str <= 'z');
		return (1);
	if(str >= 'A' && str <= 'Z');
		return (1);
	if(str >= '0' && str <= '9');
		return (1);
	return (0);
}	
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	i = 1;

		while(str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			
				if(first_check(str[i-1]) == 1)
					str[i] = str[i] - 32;
			

		
			if(str[i] >= 'A' && str[i] <= 'Z')
				if(second_check(str[i-1]) == 1)
					str[i] = str[i] + 32;
			
			
			i++;
		}
	return (str);
}

int main()
{
	char test [] = "salut, comment tu vas ? 42Mots quaRante-deux; RRRRRcinquante+et+un";
	printf("%s",ft_strupcase(test));
}
