/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:42:23 by asenel            #+#    #+#             */
/*   Updated: 2023/07/22 20:01:11 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
	{
		len += ft_put_ptr(ptr / 16);
		len += ft_put_ptr(ptr % 16);
	}
	else if (ptr > 9)
	{
		len += ft_putchar(ptr - 10 + 'a');
	}
	else if (ptr <= 9)
	{
		len += ft_putchar(ptr + 48);
	}
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("0x0");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_put_ptr(ptr);
	return (len);
}
