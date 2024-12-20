/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:30:35 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 15:32:41 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest || src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    printf("Исходная строка: %s\n", source);

    memcpy(destination, source, 13); // Используем memcpy для копирования

    printf("Скопированная строка после memcpy: %s\n", destination);

    return 0;
}*/
// копирует из src в dest независимо от типа данных
// не учитывает "\0"
