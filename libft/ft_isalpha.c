/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:33:10 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 12:58:58 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	return (0);
}
/*int main()
{
	char c = 'a';
	int res = ft_isalpha(c);
	if(res)
	{
		printf("%c - is letter\n", c);
	}
	else
	{
		printf("%c - is not letter\n", c);
	}
	return (0);
}*/
//проверка буква алфавита или нет