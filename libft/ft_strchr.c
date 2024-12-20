/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:51:57 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:47:56 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

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
/*int	main(void)
{
	char	*s = "Hello World!";

	printf("%p\n", strchr(s, 'h'));
	printf("%p\n\n", ft_strrchr(s, 'h'));

	printf("%p\n", strchr(s, 'l'));
	printf("%p\n\n", ft_strrchr(s, 'l'));
	
	printf("%p\n", strchr(s, 's'));
	printf("%p\n\n", ft_strrchr(s, 's'));
	
	printf("%p\n", strchr(s, '\0'));
	printf("%p\n\n", ft_strrchr(s, '\0'));

	char	*s1 = "";
	printf("%p\n", strchr(s1, '\0'));
	printf("%p\n\n", ft_strrchr(s1, '\0'));

	return (0);
}*/
//ищет первого вхождение символа с в строке
//
//проверяем нет ли символа
//если не достигли конца строка значит нашли
//если символ это '\0' возвращаем ук на него
//если символ не найден возвращаем ноль
