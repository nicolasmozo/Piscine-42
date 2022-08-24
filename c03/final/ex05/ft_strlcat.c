/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:16:20 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/19 13:17:43 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	get_size(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	j = 0;
	i = 0;
	size_dest = get_size(dest);
	size_src = get_size(src);
	while ((src[j] != '\0') && (j < size))
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (size < size_dest)
		return (size_src + size);
	else
		return (size_src + size_dest);
}
/*int main(void)
{
	char src [] = "hi2ola";
	char dest [] = "nicolas!";

	printf("%d",ft_strlcat(dest, src,20));
}*/
