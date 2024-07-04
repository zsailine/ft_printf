/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsailine <zsailine@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:25:18 by zsailine          #+#    #+#             */
/*   Updated: 2024/03/18 10:33:46 by zsailine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hexa(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_putnbr_hexa(nb / 16);
		i += ft_putnbr_hexa(nb % 16);
	}
	else
	{
		if (nb <= 9)
			i += ft_putchar(nb + '0');
		else if (nb >= 10 && nb < 16)
			i += ft_putchar(nb - 10 + 'a');
	}
	return (i);
}

int	ft_print_ptr(void *ptr)
{
	int				i;
	unsigned long	dest;

	i = 0;
	dest = (unsigned long) ptr;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		ft_putstr("0x");
		i += 2;
		i += ft_putnbr_hexa(dest);
	}
	return (i);
}
