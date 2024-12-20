/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:49:46 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/20 14:03:03 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_formats(char format, va_list *args, int *len, int *i)
{
	if (*len == -1)
		return ;
	if (format == 's')
		ft_string(va_arg(*args, char *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (format == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (format == 'x' || format == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, format);
	else if (format == 'p')
		ft_pointer(va_arg(*args, unsigned long), len);
	else if (format == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (format == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}
// With ft_hex: op=option //this is to choose capitals
// The '%' sign is an order to go to a function & print argument & length
// each func count how many char we have
//len is counter how many chars we have now

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] && len != -1)
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_formats(str[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len(str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

// 1:va_list  :declare list of arguments
// 2:va_start :initiaises the argument list
// 3:va_arg   :returns value of next argument in varying-length argument list.
// 4:va_end.  :Ends

/*
int	main(void)
{
int i;
int j;
	i = ft_printf("String Fixed Unmodifiable   :    Barcelona\n");
	ft_printf("el numero de caracterees imppresos es %i\n,i);
	j =  printf("String Fixed Unmodifiable   :    Barcelona\n");
	printf("el numero de caracterees imppresos es %i\n,j);

	ft_printf("Character                   :    %c\n", 'B');
	   printf("Character                   :    %c\n", 'B');

	ft_printf("String                      :    %s\n", "Barcelona");
	   printf("String                      :    %s\n", "Barcelona");

	ft_printf("Integer in base10           :    %d\n", 25);
	   printf("Integer in base10           :    %d\n", 25);

	ft_printf("Integer in base10 (i)       :    %i\n", 31);//prints '25'
	   printf("Integer in base10 (i)       :    %i\n", 31);//prints '25'

	ft_printf("Percentage Sign             :    %%\n");%
	   printf("Percentage Sign             :    %%\n");%

	ft_printf("Entero en base10 sin signo  :    %u\n", 25);
	   printf("Entero en base10 sin signo  :    %u\n", 25);

	ft_printf("Hexadecimal(base 16) small  :    %x\n", barcelona);
	   printf("Hexadecimal(base 16) small  :    %x\n", barcelona);

	ft_printf("Hexadecimal(base 16) CAPITOL:    %X\n", BARCELONA);
	   printf("Hexadecimal(base 16) CAPITOL:    %X\n", BARCELONA);

	ft_printf("Pointer                     :    %p\n", (void *)Barcelona);
	   printf("Pointer                     :    %p\n", (void *)Barcelona);

	return (0);
}
*/
