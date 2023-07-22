/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenel <asenel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:03:01 by asenel            #+#    #+#             */
/*   Updated: 2023/07/22 18:17:46 by asenel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int a);
int	ft_putstr(char *str);
int	ft_print_hex(unsigned int hex, const char format);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int nbr);
int	ft_print_unbr(unsigned int unbr);
int	ft_printf(const char *format, ...);

#endif