/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:47 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 15:51:22 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
/*int main()
{
    char str[] = "Hello, World!";
    int value = 'X';

    printf("Исходная строка: %s\n", str);
    
    ft_memset(str + 7, value, 5);

    printf("Строка после вызова ft_memset: %s\n", str);

    return 0;
}*/
//приводим к чар чтобы могли работать с байтами
//заполняет блок памяти символом с с *b (7-ой)
//len количеством байтов (5)