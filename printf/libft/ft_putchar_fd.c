/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:05:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/30 15:09:44 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
    int fd = 1;
    char c = 'A';

    ft_putchar_fd(c, fd);

    return 0;
}*/
//выводит с на output если 1