/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:06:58 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:59:39 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
/*int main() {
    char input_char = 'a';

    // Вызываем ft_toupper и стандартную функцию toupper
    int result_ft = ft_toupper(input_char);
    int result_std = toupper(input_char);

    // Выводим результаты
    printf("Input character: %c\n", input_char);
    printf("ft_toupper result: %c\n", (char)result_ft);
    printf("toupper result: %c\n", (char)result_std);

    return 0;
}*/
//меняет на верхний регистр
