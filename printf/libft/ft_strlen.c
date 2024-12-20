/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:32:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 13:06:23 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
	char *testStr = "Hello, World!";
	int length = ft_strlen(testStr);

	printf("String length %s is %d\n", testStr, length);
	return 0;

}*/
//вычисляет длину строки, не учитывая нулевой терминатор
