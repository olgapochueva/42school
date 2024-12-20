/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:58:58 by opochuev          #+#    #+#             */
/*   Updated: 2023/12/09 17:56:26 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	if (size > 0)
	{
		size = size - 1;
		while (src[i] && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}
