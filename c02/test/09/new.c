/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:40:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/18 11:10:26 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char first_index( char str)
{
	if(str >= 'a' && str <= 'z')
		str = str - 32;
}

char to_lowercase(char str)
{
	if(str >= 'A' && str <= 'Z')
		str = str + 32;
}

int upper(char j)
{
	if (j >= 'A' && j <= 'Z')
		return 1;
	return 0;
}

int lower(char j)
{
	if (j >= 'a' && j <= 'z')
		return 1;
	return 0;
}

char	*ft_strupcase(char *str)
{
	int		i;
	int		j;

	first_index(str[0]);

	i = 1;

	while(str[i])
	{	
		j = str[i-1];
		if(lower(str[i] == 1))
			str[i] = str[i] + 32;
		if(!(upper(j) == 1 && lower(j) == 1))
		{
			if(!(j >= '0' && j <= '9'))
				str[i] = str[i] - 32;
		}
	}

	
}

int main()
{
	char test [] = "salut, comment tu vas ? 42Mots quaRante-deux; RRRRRcinquante+et+un";
	printf("%s",ft_strupcase(test));
}
