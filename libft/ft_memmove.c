/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:44 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 15:10:17 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1 && (s1 || s2))
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	if (s1 < s2 && (s1 || s2))
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
/*int main()
{
    char src[] = "Hello World";
    char *dest;

    dest = src;
    printf("%s\n", (char *)ft_memmove(src, dest, 8));
    printf("%s\n", (char *)memmove(src, dest, 8));
}*/
//копирует блок s2 в s1 с учетом перекрывания
//на n количество байтов
//с конца если s2<s1
//с начала если нет
