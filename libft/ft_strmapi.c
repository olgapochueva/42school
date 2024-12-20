/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:27:20 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 11:24:14 by opochuev         ###   ########.fr       */
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
		dst[i] = '\#include "libft.h"0';
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
}*/
//создает новую строку применяя ф к каж символу
/*static char	my_func(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return ('0');
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	if (f == NULL)
	{
		ft_strlcpy(ptr, s, ft_strlen(s) + 1);
		return (ptr);
	}
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int	main()
{
	char 	*s;
	char	(*f)(unsigned int, char);	

	f = my_func;
	s = "hello";	
	printf("%s\n", ft_strmapi(s, f));
}*/
//выделяем память на строку
//если в ф ничего то копируем исх строку
//цикл до конца строки делает ф для
//каждого символа строки
//
//принимает ф (индекс и символ)
//используется когда исходная строка
//должна остаться неизмененной