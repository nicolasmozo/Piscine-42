/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:17:41 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/27 12:02:36 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		b;
	int		j;

	tab = (char *)malloc(sizeof(strs) * size);
	if (!tab)
		return (0);
	i = 0;
	b = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[b++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size -1)
		{
			tab[b++] = sep[j++];
		}
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
#include <stdio.h>
int main(void)
{
    int i = 0;
    char *range[4];
    range[0] = "hola";
    range[1] = "como";
    range[2] = "estas";
    range[3] = "nicolas";
    
    printf("%s", ft_strjoin(4, range," "));
}*/
