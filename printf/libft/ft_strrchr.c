/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:00:04 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:27:05 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s != '\0')
		s++;
	while (s >= str)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
/*int	main(void)
{
	char	v[] = "Hello world";
	printf("%p\n", ft_strrchr(v, '\0'));	
	printf("%p\n", strrchr(v, '\0'));	
}*/
//ищем последнее назождение символа с в строчке *s
//
//ставим указатель на конец строчки
//проверяем с конца есть ли символ с в строчке
//так как нужно последнее нахождение символа
//возвращаем указатель на этот символ в строке 
