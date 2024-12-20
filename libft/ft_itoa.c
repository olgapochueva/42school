/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:55:14 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 11:46:38 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdlib.h>
//преобразует число в строку
static int	ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

//вычисляем количество цифр в числе
static void	ft_fill_digits(char *ptr, int n, int len)
{
	while (n != 0)
	{
		if (n < 0)
		{
			ptr[len - 1] = '0' - (n % 10);
			n /= 10;
		}
		else
		{
			ptr[len - 1] = '0' + (n % 10);
			n /= 10;
		}
		len--;
	}
}

//заполняем цифрами строку длина i c конца
char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = ft_len(n);
	ptr = (char *)malloc(len + 1);
	if (NULL == ptr)
		return (NULL);
	ptr[len] = '\0';
	if (0 == n)
		ptr[0] = '0';
	else if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ft_fill_digits(ptr, n, len);
	return (ptr);
}
//преобразует число в строку
/*int main()
{
  char *str = ft_itoa(-1234);
  printf("%s\n", str);

  str = ft_itoa(27);
  printf("%s\n", str);

  str = ft_itoa(707);
  printf("%s\n", str);

  str = ft_itoa(-2147483648);
  printf("%s\n", str);

  str = ft_itoa(2147483647);
  printf("%s\n", str);
  
  str = ft_itoa(0);
  printf("%s\n", str);

  return 0;
}
*/
//считаем минус
// считаем колво цифр
//возвращаем i
//
//заполняем строку с конца
