/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:42:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 13:15:42 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*int main()
{
    char src[] = "Example string";
    char dst[50];

    // Копирование строки из src в dst
    size_t copied = ft_strlcpy(dst, src, 5);

    printf("Длина исходной строки: %zu\n", copied);
    printf("Исходная строка: %s\n", src);
    printf("Целевая строка после копирования: %s\n", dst);

    return 0;
}*/
//копирует одну строку в другую
//с учетом размера в сайз,
//возвращает исходную строку, которая была скопирована
//
//запоминаем длину строки src
//копируем одну строчку в другую
//пока не закончится исходная строка либо буфер
