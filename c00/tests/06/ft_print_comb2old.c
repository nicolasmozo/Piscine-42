/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/13 16:32:00 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	
	char	e;
	char	d;

	d = (char)a + 48;
	e = (char)b + 48;

	if(a == b){
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, " ", 1);
	}
	else
	{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, ", ",2);
	//if (a != 9)
	//{
	//	write(1, ", ", 2);
    }
	

}

void	ft_print_comb2(void)
{
	
	int	a;
	int	b;
	int base_a;
	int base_b;

	a = 0;
	b = 1;
	base_a = 0;
	base_b = 0;

	while(!(base_a > 100))
	{
		while(!(base_b > 100))
		{
			while (!(a > 9))
			{
				while (!(b > 9))
				{
					print(base_a, base_b);
					print(a, b);
					b++;
				}
				//b = a+2;
				a++;
			}
			a = b+2;
			base_b++;
		}	
		base_b = base_a+2;
		base_a++;
	}
	
	
	/*
	int a,b;
	a = 0;
	b = 1;
	
	while(!(a>100)
	{
		while(!(b>100)
		{
			
		}
	}
	*/








}
int main(void)
{
	ft_print_comb2();
}
