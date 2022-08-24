/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:41:35 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/18 11:51:08 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] < (size-1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\0';
	return (i);
}

int main()
{
	char a[] = "holacomoestan";
	char b[] = "";

	printf("%d",ft_strlcpy(b,a,14));

}
