/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:15:36 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/26 14:06:26 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// For printing numbers  - '% d' OR  - '% i'
void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		if (write(1, "-2147483648", 11) < 0)
		{
			(*len) = -1;
			return ;
		}
		*len += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_len('-', len);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
	return ;
}

// Int can be positive or negative, unsigned int can only be positive
// Error -1 means that there is an error
// +- takes into considration the 11 characters, at the time of printing
// 'nb = -nb' turns a negative back into a positive.
// % 10 + '0'         0 converts an int into a char. (ASCII)

// For printing unsigned int  - '% u'
void	ft_unsigned_int(unsigned int nb, int *len)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_len(nb, len);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
	return ;
}

//The same as put number but you dont need: -2147483648, 
//because unsigned no negative
