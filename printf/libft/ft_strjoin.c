/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:11:27 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 19:25:37 by opochuev         ###   ########.fr       */
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
//копирует две строки в одну новую
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	buffer;
	size_t	i;
	char	*ptr;

	i = 0;
	if (NULL == s1 || NULL == s2)
		return (NULL);
	buffer = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(buffer);
	if (NULL == ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, buffer);
	ft_strlcpy(ptr + ft_strlen(s1), s2, buffer - ft_strlen(s1));
	return (ptr);
}
/*int	main()
{
	char	*s = "Hello";
	char	*s1 = "World";

	printf("%s\n", ft_strjoin(s, s1));
	return 0;
}*/
//проверяем пустые строки
//вычисляем буфер двух строк +1
//выделяем память
//копируем первую строчку
//
