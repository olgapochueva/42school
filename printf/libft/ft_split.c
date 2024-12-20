/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:11:26 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 13:32:34 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
/*
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

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	substring_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	substring_len = s_len - start;
	if (len > substring_len)
		len = substring_len;
	str = malloc(len + 1);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
*/
// подсчитываем количество букв
// до разделителя
size_t	ft_strclen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

//для подсчета слов
size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

//освобождаем выделенную память
static char	**free_all(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	count;
	size_t	index;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	index = 0;
	while (index < count)
	{
		while (*s == c)
			s++;
		words[index] = ft_substr(s, 0, ft_strclen(s, c));
		if (!words[index])
			return (free_all(words));
		s = s + ft_strclen(s, c);
		index++;
	}
	words[count] = NULL;
	return (words);
}
/*
// Подсчитываем количество слов
// Выделяем память для массива слов
// Пропускаем разделители
// создаем подстроку из исх строки
// Обрабатываем ошибку выделения
// Перемещаемся ук к следующему слову
// Заканчиваем массив нулевым указателем
// обозначая конец
// возвращаем ук на начало нового массива

int main() {
    char str[] = "Hello, world, and, yes!";
    char **words = ft_split(str, ','); 
    // Проверяем, что массив слов не пустой
    if (words) {
        // Проходим по каждому слову в массиве
        for (int i = 0; words[i] != NULL; i++) {
            printf("Word %d: %s\n", i, words[i]);
            free(words[i]);         }
        free(words);     }

    return 0;
}*/