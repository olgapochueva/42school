/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:03:31 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 15:54:30 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*int main()
{
    char str[] = "Hello, World!";
    
    printf("Исходная строка: %s\n", str);
    
    ft_bzero(str + 7, 5);

    printf("Строка после вызова ft_bzero: %s\n", str);

    bzero(str + 7, 5);

    printf("Строка после вызова bzero: %s\n", str);

    return 0;
}*/
//приводим к чар чтобы могли работать с байтами
//заполняем блок памяти 0
