/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:28:54 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/19 11:25:01 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	return_index(char *str, char *find)
{
	int	a;
	int	b;
	int	index;

	a = 0;
	b = 0;
	index = 0;
	while (str[a])
	{
		if ((find[b] == str[a]) && (find[b + 1] == str[a + 1]))
			return (index);
		index++;
		a++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = return_index(str, to_find);
	while (str[i] != '\0')
		i++;
	while (str[j])
	{
		str[j] = str[index];
		j++;
		index++;
	}
	str[j + 1] = '\0';
	return (str);
}
/*int main(void)
{	
	char a [] = "holanicolas";
	char b [] = "la";
	printf("%s",ft_strstr(a,b));
}*/
