/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:00:01 by asenel            #+#    #+#             */
/*   Updated: 2023/07/22 20:17:03 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_format_str(va_list args, char format_type)
{
	int	len;

	len = 0;
	if (format_type == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format_type == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format_type == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format_type == 'i' || format_type == 'd')
		len += ft_print_nbr(va_arg(args, int));
	else if (format_type == 'u')
		len += ft_print_unbr(va_arg(args, unsigned int));
	else if (format_type == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), 'x');
	else if (format_type == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), 'X');
	else if (format_type == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		len;

	count = 0;
	len = 0;
	va_start(args, format);
	while (format[count])
	{
		if (format[count] == '%')
		{
			len += ft_format_str(args, format[count + 1]);
			count++;
		}
		else
			len += ft_putchar(format[count]);
		count++;
	}
	va_end(args);
	return (len);
}
