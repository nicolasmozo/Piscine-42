/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:11:47 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/25 19:20:29 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = size(src);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char test[] = "nicolas";
    printf("%s\n",ft_strdup(test));
    printf("%s\n", test);

    return 0;
}*/
