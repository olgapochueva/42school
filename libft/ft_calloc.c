/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:48:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 17:54:14 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
/*void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
/*int main() {
    size_t count = 5;
    size_t size = 4;
    int *result = (int *)ft_calloc(count, size);

    if (result == NULL) {
        printf("Не удалось выделить память.\n");
        return 1;
    }

    printf("%d\n", *result);

    free(result);

    return 0;

}*/
//выделяем блок памяти на count элементов на size размер
//возвращаем начало этой области
//заполняем 0
