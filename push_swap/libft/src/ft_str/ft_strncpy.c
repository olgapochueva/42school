/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:17:41 by opochuev          #+#    #+#             */
/*   Updated: 2024/04/19 12:17:54 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t ft_strncpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    const char *src_ptr;
    char *dst_ptr;
	size_t p;

    srcsize = 0;
	src_ptr = src;
	dst_ptr = dst;
    while (*src_ptr != '\0')
    {
        srcsize++;
        src_ptr++;
    }
    if (dstsize == 0 || dst == NULL)
        return (srcsize);
    p = 0;
    while (p < (dstsize - 1) && *src != '\0')
    {
        *dst_ptr = *src;
        dst_ptr++;
        src++;
        p++;
    }
    *dst_ptr = '\0';
    return (srcsize);
}
