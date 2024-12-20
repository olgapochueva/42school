/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:32:40 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 13:01:24 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_isascii(int i)
{
	if ((i >= 0 && i <= 127))
		return (1);
	return (0);
}
/*int main()
{
	char c = 'a';
	int res = ft_isascii(c);
	if(res)
	{
		printf("%c - is asci\n", c);
	}
	else
	{
		printf("%c - is not asci\n", c);
	}
	return (0);*/
	//проверяет находится ли в пределах аски
