/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:54:43 by asenel            #+#    #+#             */
/*   Updated: 2023/07/22 19:55:15 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_put_hex(unsigned int hex, char type)
{
	int	len;

	len = 0;
	if (hex >= 16)
	{
		len += ft_put_hex(hex / 16, type);
		len += ft_put_hex(hex % 16, type);
	}
	else if (hex > 9 && type == 'x')
	{
		len += ft_putchar(hex - 10 + 'a');
	}
	else if (hex > 9 && type == 'X')
	{
		len += ft_putchar(hex - 10 + 'A');
	}
	else if (hex <= 9)
	{
		len += ft_putchar(hex + 48);
	}
	return (len);
}

int	ft_print_hex(unsigned int hex, const char format)
{
	int	len;

	if (hex == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		len = ft_put_hex(hex, format);
	return (len);
}
