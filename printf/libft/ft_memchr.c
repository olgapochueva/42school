/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:42 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 17:11:21 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
    const char *s = "Hello, world!";
    int c = 'o';
    size_t n = 5;

    printf("Using ft_memchr:\n");
    printf("%p\n", ft_memchr(s, c, n));

    printf("Using memchr:\n");
    printf("%p\n", memchr(s, c, n));

    return 0;
}*/
//проверяет первое вхождение с в *s,
//проверяет n байт
