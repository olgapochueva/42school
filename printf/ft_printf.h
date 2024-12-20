/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:16:25 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/27 14:17:23 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> //For malloc
# include <stdarg.h> //Defines a variable type va_list
# include <stddef.h> //For NULL & size
# include <unistd.h> //For write
# include <stdio.h>  //For printf //linkedin with conditional #ifndef
// FORMATS OF PRINT
int		ft_printf(char const *str, ...);
void	ft_putchar_len(char character, int *len);
void	ft_string(char *args, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_unsigned_int(unsigned int nb, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char op);
void	ft_pointer(unsigned long pointer, int *len);

#endif
