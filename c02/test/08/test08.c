/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:35:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/17 14:19:20 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		//while(str[i-1])
		//{
			if(!(str[i] < 'a' && str[i] > 'z'))
			{
				if(str[i-1] < 'a' && str[i-1] > 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		//}
		i++;
	}
	return (str);
}

int main()
{
	char test [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strupcase(test));
}
