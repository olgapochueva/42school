/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:16:24 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 13:00:11 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*int main()
{
	char c = 'a';
	int res = ft_isalnum(c);
	if(res)
	{
		printf("%c - is isalnum\n", c);
	}
	else
	{
		printf("%c - is not isalnum\n", c);
	}
	return (0);
}*/
//проверка является ли буквой или цифрой
