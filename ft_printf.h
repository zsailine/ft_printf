/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsailine <zsailine@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:16:00 by zsailine          #+#    #+#             */
/*   Updated: 2024/03/13 11:20:44 by zsailine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_hexa_l(unsigned int nb);
int	ft_putnbr_hexa_u(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_put_u_nbr(unsigned int nb);
int	ft_printf(const char *str, ...);
int	ft_print_ptr(void *ptr);

#endif
