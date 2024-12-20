/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:47:19 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 13:14:58 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_isprint(int i)
{
	if ((i >= 32 && i <= 126))
		return (1);
	return (0);
}
/*int main()
{
	char c = 'a';
	int res = ft_isprint(c);
	if(res)
	{
		printf("%c - is print\n", c);
	}
	else
	{
		printf("%c - is not print\n", c);
	}
	return (0);*/
	//проверка является ли печатным символом
	//(цифры, буквы, пробел, все что на клавиатуре)
