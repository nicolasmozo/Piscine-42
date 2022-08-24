/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizeeeee.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:35:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/18 10:40:13 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	uppercase_numeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9' ))
		return (1);
	return (0);
}

char	lowercase_numeric(char d)
{
//	if ((d >= 'a' && d <= 'z') &&  
}
char	*ft_strupcase(char *str)
{
	int	i;
	char	c;
	char	k;
	
	i = 1;
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while(str[i] != '\0')
	{
		c = str[i];
		k = str[i - 1];
		if(c >= 'a' && c <= 'z')
		{
			if((uppercase_numeric(k)) == 1  || !(k >= 'a' && k <= 'z'))
				str[i] = str[i] - 32;
		}
		else if(c >= 'A' && c <= 'Z')
		{
			if((uppercase_numeric(k) == 0) && (k  >= 'a' && k <= 'a'))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char test [] = "salut, comment tu vas ? 42Mots quaRante-deux; RRRRRcinquante+et+un";
	printf("%s",ft_strupcase(test));
}
