/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:18:43 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:10:17 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (size == 0)
		return (i + ft_strlen(src));
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*int main(void)
{
    char dst1[20] = "Hello";
    char dst2[20] = "Hello";
    char dst3[20] = "Hello";
    char src[] = " World";
    size_t size;

    // Сценарий, когда буфер больше, чем dst
    size = 15;
    printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
    printf("strlcat: %zu\n", strlcat(dst2, src, size));
    printf("Result ft_strlcat: %s\n", dst1);
    printf("Result strlcat: %s\n", dst2);

    // Сценарий, когда буфер меньше, чем dst
    size = 6;
    printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
    printf("strlcat: %zu\n", strlcat(dst3, src, size));
    printf("Result ft_strlcat: %s\n", dst1);
    printf("Result strlcat: %s\n", dst3);

    // Сценарий, когда буфер и dst равны нулю
    size = 0;
    printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
    printf("strlcat: %zu\n", strlcat(dst3, src, size));
    printf("Result ft_strlcat: %s\n", dst1);
    printf("Result strlcat: %s\n", dst3);

    return 0;
}*/
//делает конкатенацию двух строк
//находим длину dst
//если буфер равен 0,
//возвращаем длину начальной строки
//копируем строку src к концу dst
//проверяем если dst меньше size то ставим ноль
