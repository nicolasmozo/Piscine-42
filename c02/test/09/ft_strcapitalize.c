/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:49:34 by omozo-av          #+#    #+#             */
/*   Updated: 2022/08/17 21:05:31 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_upcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	ft_check_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}

int	ft_check_num(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_check_alpha(str[i]) == 0 && ft_check_num(str[i]) == 0)
			j = 0;
		else if (j != 1)
		{
			ft_upcase(str + i);
			j = 1;
		}
		else
			ft_lowcase(str + i);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char ex[] = "salut, coMMent tu vAs ? 42mOts quarAnte-dEux; cinquante+et?un";
	printf("%s\n", ex);
	printf("%s", ft_strcapitalize(ex));
}*/
