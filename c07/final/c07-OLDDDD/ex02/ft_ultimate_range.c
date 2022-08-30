/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:43:24 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/27 09:10:30 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*#include <stdio.h>
int main(void)
{
    int i = 0;
    int *range;
    printf("%d", ft_ultimate_range(&range,1, 10));
    //while (i < 20)
    //{
    //    printf("%d ", range[i++]);
    //}
    printf("\n");
}*/
