/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:38:33 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/16 16:21:27 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	
	while (str[i])
	{
		
		if(str[i] == '\0')
		{
			return (1);
		}
		if (!(str[i] >= 'A' && str[i]  <= 'Z'))
		{
		//	return 0;
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return 0;
			}
	//		return 0;
		}
	//	if (!((str[i] >= 'a' && str[i] <= 'z')))
	//	{
	//		return 0;
	//	}

		i++;
	}
		return 1;
}

int main(void)
{
	char str[] = "";

	printf("%d",ft_str_is_alpha(str));
}
