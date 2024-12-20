/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:15:32 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 14:59:54 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
/*int main() {
    char input_char = 'a';

    // Вызываем ft_tolower и стандартную функцию toupper
    int result_ft = ft_tolower(input_char);
    int result_std = tolower(input_char);

    // Выводим результаты
    printf("Input character: %c\n", input_char);
    printf("ft_lower result: %c\n", (char)result_ft);
    printf("tolower result: %c\n", (char)result_std);

    return 0;
}*/
//меняет на нижний регистр
