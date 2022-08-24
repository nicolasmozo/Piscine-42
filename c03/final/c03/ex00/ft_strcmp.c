/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:34:45 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/21 08:20:02 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int main(void)
{
	char s1 [] = "aaaa";
	char s2 [] = "a";
	printf("%d",ft_strcmp(s1,s2));
	printf("%d",strcmp(s1,s2));
}