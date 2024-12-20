/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:55:57 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 18:04:18 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
/*int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/
char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
    const char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy:     %s\n", copy);
        free(copy);
    } else {
        printf("Memory allocation failed!\n");
    }
    char *ft_copy = strdup(original);

    if (ft_copy != NULL) {
        printf("Your strdup: %s\n", ft_copy);
        free(ft_copy);
    } else {
        printf("Your strdup failed!\n");
    }
    return 0;
}*/
//выделеляем память (размер одного символа строки
// умножить на j+1 чтобы вставить  '\0')
//дублирует строчку s в выделенную область
//добавляем нуль терминатор
//возврат указатель на ук новой строки
