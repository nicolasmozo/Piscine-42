/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:34:45 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/20 17:14:09 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_size(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	size_s2;
	int	size_s1;

	i = 0;
	size_s2 = get_size(s2);
	size_s1 = get_size(s1);
	if (size_s2 > size_s1)
		return (-1);
	while (s1[i])
	{
		while (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char s1 [] = "aa";
	char s2 [] = "aaaa";
	printf("%d",ft_strcmp(s1,s2));
}*/
