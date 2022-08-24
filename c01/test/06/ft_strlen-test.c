/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen-test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:20:45 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/14 19:43:02 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;
	counter = 0;

	while(*str++ != '\0')
	{
		counter++;
	}
	return (counter);
}

int main()
{
	int a = ft_strlen("qwertyuioplkjhgfdsazxcvbnm"); 
	printf("%d",a);
}
