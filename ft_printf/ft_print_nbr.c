/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:16:25 by asenel            #+#    #+#             */
/*   Updated: 2023/07/23 15:42:50 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_put_nbr(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		len += ft_put_nbr(nbr / 10);
	}
	len += ft_putchar((nbr % 10) + '0');
	return (len);
}

int	ft_print_nbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	len += ft_put_nbr(nbr);
	return (len);
}

int	ft_print_unbr(unsigned int unbr)
{
	int	len;

	len = 0;
	if (unbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	len += ft_put_nbr(unbr);
	return (len);
}
