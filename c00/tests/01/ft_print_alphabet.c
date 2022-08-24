/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:32:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/10 17:55:34 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_print_alphabet(void)
{
	//char alphabet = 'abcdefghijklmnopqrstuvwxyz';
	write(1,"abcdefghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
}
