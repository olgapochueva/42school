/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:37:41 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 19:08:40 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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

int	ft_strlen(const char *str)
{
	int	i;

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
}*/
//создаем новую подстроку из исх строки начиная с start
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
/*int	main()
{
	char	*str;

	str = "hello";
	printf("%s\n",ft_substr(str, 0, 20));
}*/
//создаем новую подстроку из исх строки начиная с start
//проверяем не пустая ли строка
//длина подстроки = длина строки минус позиция старт
//если дано длина больше доступной то равно доступной
//выделение памяти под новую строку
//копирование подстроки в новую строку