/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:34:45 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/20 18:08:06 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while ((j < n) && ((s1[j] != '\0') || (s2[j] != '\0')))
	{	
		while (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char s1 [] = "aaa";
	char s2 [] = "aaaf";
	printf("%d",ft_strncmp(s1,s2,4));
}*/
