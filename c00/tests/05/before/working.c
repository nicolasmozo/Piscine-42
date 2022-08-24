/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:22 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/11 21:38:02 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>  

void print(char c)
{
	write(1,&c,1);
}


void test()
{
	int a,b,c,ascii,comma;
	a = 0;
	b = 1;
	c = 2;
	ascii = 48;
	comma = 44;

	while(!(a > 9))
	{
		while(!(b > 9))
		{
			while(!(c > 9))
			{
				if( a != b &&  b != c && a != c )
				{
				
				char d = (char)a + ascii;
				char e = (char)b + ascii;
				char f = (char)c + ascii;

				if (a == 7 && b ==8 && c == 9)
				{
				print(d);
				print(e);
				print(f);
				break;
	
				}
				print(d);
				print(e);
				print(f);
				print(comma);	
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}

int main(void)
{
	test();
}
