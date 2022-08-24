/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:32:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/10 18:11:06 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_print_alphabet(void)
{
	write(1,"zyxwvutsrqponmlkjihgfedcba", 26);
}
int	main(void)
{
	ft_print_alphabet();
}
