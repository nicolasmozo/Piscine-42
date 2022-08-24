/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:35:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/17 18:57:15 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	i = 1;

		while(str[i] != '\0')
		{
			if(str[i] >= 'a' && str[i] <= 'z' && !((str[i-1] >= 'a' && str[i-1] <= 'z') || (str[i-1] >= 'A' && str[i-1] <= 'Z') || (str[i-1] >= '0' && str[i-1] <= '9')))
					str[i] = str[i] - 32;
			else if(str[i] >= 'A' && str[i] <= 'Z' && ((str[i-1] >= 'a' && str[i-1] <= 'z') ||  (str[i-1] >= 'A' && str[i-1] <= 'Z') || (str[i-1] >= '0' && str[i-1] <= '9')))
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
