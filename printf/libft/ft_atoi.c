/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:16:27 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 17:34:16 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}
/*int	main(void)
{
	char	*s;
	char	*s1;

	s1 = "    -2413";
	s = "     +2413";
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", atoi(s1));
    return (0);
}*/
//конвертирует строку в int
//пропуск пробелов и табуляцию
//есть ли +-, запоминаем минус в нег
//проверка на цифры
//возврат цифры на знак