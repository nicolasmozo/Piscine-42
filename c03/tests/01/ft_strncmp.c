/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:34:45 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/18 19:47:37 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;
	unsigned int	r;

	j = 0;
	r = 0;
	while (((s1[j] != '\0') && (s2[j] != '\0')) && (j < n))
	{
		while (s1[j] != s2[j])
		{
			r = 1;
			j++;
		}
		j++;
	}
	return (r);
}
/*#include <stdio.h>

int main(void)
{
	char s1 [] = "hola";
	char s2 [] = "hol1";
	printf("%d",ft_strncmp(s1,s2,2));
}*/
