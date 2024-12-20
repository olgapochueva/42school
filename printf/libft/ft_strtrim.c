/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:10 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 13:12:52 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = (char)c;
	while (*s != a && *s != '\0')
		s++;
	if (*s != '\0')
		return ((char *)s);
	else if (a == '\0' && *s == '\0')
		return ((char *)s);
	else
		return (NULL);
}

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
}*/
//создает копию с1 удяляя сет из начала и конца
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	if (j == 0)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str)
		ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
/*int main(void)
{
	printf("%s\n", ft_strtrim("  Hello World    ", " "));
    return 0;
}*/
//создает копию s1 удаляя символы set
//которые есть в начале и в конце s1
//
//проверяем если строчки пустые
//считаем длину s1 в j
//проверка символа set в начале строки
//проверка символа set с конца строки
//если осталось 0 символов после удаления
//строка пустая
//выделение памяти для новой строки
//копирование новой строки