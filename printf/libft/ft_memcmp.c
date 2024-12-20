/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:20:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 17:27:15 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char *s = "Hello World";
    char *s1 = "Hello Hi";
    size_t n = 7;

    int result = ft_memcmp(s, s1, n);

    if (result == 0)
        printf("The strings are equal up to %zu letters\n", n);
    else
        printf("The strings are different\n");

    return 0;
}*/
//сравнение двух блоков памяти n колво байт
//возврат 0 если равны
//разницу s1-s2 если нет
