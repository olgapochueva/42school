/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:39:11 by opochuev          #+#    #+#             */
/*   Updated: 2024/01/29 14:53:39 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
    char *s1 = "Hello, World!";
    char *s2 = "Head, World!";
    int n = 5;

    int result_ft = ft_strncmp(s1, s2, n);
    int result_std = strncmp(s1, s2, n);

    printf("ft_strncmp: %d\n", result_ft);
    printf("strncmp: %d\n", result_std);
    return 0;
}*/
// все приводим к unsigned char так как просто char может быть + и -