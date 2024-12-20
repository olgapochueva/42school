/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:42:05 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 15:23:58 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <string.h>
/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	return ;
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*int	main()
{
	ft_putnbr_fd(404, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);	
}*/
//выводит номер если 1
//сначала делает рекурсию делит на 10
//печатает первую цифру
//печатает вторую через модуль