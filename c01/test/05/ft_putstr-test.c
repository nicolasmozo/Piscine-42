/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr-test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:26:32 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/15 16:47:54 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	ft_putstr("hola");
}
