/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:11:30 by asenel            #+#    #+#             */
/*   Updated: 2023/07/22 20:17:19 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}
