/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:17:41 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/27 16:46:10 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	total_lenght(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	while (i < size)
	{
		len += size_sep + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		b;
	int		j;
	int		len;

	if (size == 0)
		return (tab = malloc(sizeof(char)));
	len = total_lenght(size, strs, ft_strlen(sep));
	tab = malloc(sizeof(char) * (len * 1) + 1);
	i = 0;
	b = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[b++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size -1)
			tab[b++] = sep[j++];
		i++;
	}
	tab[b] = '\0';
	return (tab);
}
/*#include <stdio.h>
int main(void)
{
    int i = 0;
    char *range[4];
    range[0] = "hola";
    range[1] = "como";
    range[2] = "estas";
    range[3] = "nicolas";
    
	//size_strs(range);
    printf("%s", ft_strjoin(4, range,"------------------------"));
}*/
