/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:04:17 by opochuev          #+#    #+#             */
/*   Updated: 2024/04/19 12:04:31 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buffsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen < buffsize - 1 && buffsize > 0)
		ft_strlcpy(&dst[dstlen], src, buffsize - dstlen);
	if (dstlen >= buffsize)
		dstlen = buffsize;
	return (dstlen + srclen);
}
