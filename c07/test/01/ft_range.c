/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:24:23 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/25 22:14:32 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*#include <stdio.h>
int main(void)
{
    int i = 0;
    int *r;
    r = ft_range(10, 10);
    while (i < 20)
    {
        printf("%d ", r[i++]);
    }
    printf("\n");
}*/
