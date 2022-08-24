/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:35:52 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/15 20:51:37 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
		unsigned int	i = 0;

			
			while (src[i] != '\0' && i < n)
			{	
				dest[i] = src[i];
				i++;
			}
			while (i < n)
			{
				dest[i] = '\0';
			}
		return (dest);
		
	/*
		unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
	*/
}

int main()
{	
	char a[] = "holacomoestan";
	char b[] = "";

	ft_strncpy(b,a,14);
	printf("%s",b);

}	
