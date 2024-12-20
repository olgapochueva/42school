/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:13 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 12:58:53 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isdigit(int i)
{
	while (i >= '0' && i <= '9')
		return (1);
	return (0);
}
/*int main()
{
	char c  = '5';
	if(ft_isdigit(c))
	{
		printf("%c - this is number\n", c);
	}
	else
	{
		printf("%c - this is not number\n", c);
	}
	return 0;
}*/
// проверка является ли цифрой
