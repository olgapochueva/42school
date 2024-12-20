/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:17:33 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/31 11:43:20 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*void	ft_firstup(unsigned int i, char *c)
{
	if (i == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, s + i);
		++i;
	}
}
//применяет ф к каждому символу
/*int	main()
{
	void	(*f)(unsigned int, char *);

	f = ft_firstup;
    char str[] = "hello";
	ft_striteri(str, f);
	printf("%s\n", str);
    return 0;
}*/
//применяет функцию к каждому символу
//не создает новую строку и не возвращает
//
//принимает ф (индекс и символ)
// когда не нужно созд новую строку