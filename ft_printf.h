/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoc <kgoc@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:07:24 by kgoc              #+#    #+#             */
/*   Updated: 2022/11/22 23:28:34 by kgoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_print_str(char *str);
int	ft_int(int number);
int	ft_u_int(unsigned int number);
int	ft_hex_nbr(unsigned int number, char c);
int	ft_point(unsigned long a, int sign);

#endif