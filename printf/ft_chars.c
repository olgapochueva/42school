/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:15 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/27 14:06:12 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// For printing character '% c'
void	ft_putchar_len(char c, int *len)
{
	if (*len != -1)
	{
		if (write(1, &c, 1) < 0)
		{
			(*len) = -1;
			return ;
		}
		(*len)++;
	}
	return ;
}
/*
write function return how many bites
code is ok write '1', error write '-1' (*len != -1)
This is a failsafe test. If len is less than zero print '-1' is an error.
Or else print 'len++', which means that the function works.
we put ptr in -1 - error or put +1
*/

// For printing string '% s'
/*
this function processes a string, either outputting "(null)" for a NULL 
string or forwarding the string character by character to another function 
while keeping track of the string's length. If we have error writing "(null)" 
to the standard output, it sets the length to -1 to indicate error
*/

void	ft_string(char *args, int *len)
{
	unsigned int	i;

	i = 0;
	if (args == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			*len = -1;
		else
			(*len) += 6;
		return ;
	}
	while (args[i] != '\0' && *len != -1)
	{
		ft_putchar_len(args[i], len);
		i++;
	}
	return ;
}

// you can use if (!args) (args == NULL)...
/*
If ARGS = NULL then write NULL.
Or else print the string starting at the start and stops before '\0'
*/
