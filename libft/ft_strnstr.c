/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:00 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:58:17 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0'
				&& haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char haystack[] = "Hello World ";
    char needle[] = "World ";

    printf("%s\n", ft_strnstr(haystack, needle, 12));
    printf("%s\n", strnstr(haystack, needle, 12));

    return 0;
}*/
//поиск подстроки needle в строке haystack
//
//если подстрока пустая то то ук на начало haystack
//перебираем haystack строку на len колво символов
//сравнение символов текущего эл строки и подстроки
//сравнение идет пока совпадают/конец needle/ len в haystack
//если совпала вся подстрока возвращаем
//начало этой подстроки в  haystack 
