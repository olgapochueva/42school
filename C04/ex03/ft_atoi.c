/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:43:55 by opochuev          #+#    #+#             */
/*   Updated: 2023/12/12 21:57:33 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

int	ft_atoi(char *str)
{
	int	evennbr;
	int	res;
	int	i;

	i = 0;
	evennbr = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			evennbr++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	if (!(evennbr % 2))
		return (res);
	else
		return (-res);
}
/*
int 	main(void)
{
	char str[] = " ---+--+1234ab567";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
}*/
