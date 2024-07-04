/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsailine <zsailine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:20:31 by zsailine          #+#    #+#             */
/*   Updated: 2024/03/23 11:04:52 by zsailine         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

static int	ft_check_percent(const char type, va_list args)
{
	int	length;

	length = 0;
	if (type == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (type == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		length += ft_put_u_nbr(va_arg(args, unsigned int));
	else if (type == 'x')
		length += ft_putnbr_hexa_l(va_arg(args, unsigned int));
	else if (type == 'X')
		length += ft_putnbr_hexa_u(va_arg(args, unsigned int));
	else if (type == 'p')
		length += ft_print_ptr(va_arg(args, void *));
	else if (type == '%')
	{
		write(1, "%", 1);
		length += 1;
	}
	else
		return (0);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		args;
	int			length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += ft_check_percent(str[i], args);
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
