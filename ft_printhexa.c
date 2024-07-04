/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsailine <zsailine@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:25:42 by zsailine          #+#    #+#             */
/*   Updated: 2024/03/13 15:25:51 by zsailine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_l(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_putnbr_hexa_l(nb / 16);
		i += ft_putnbr_hexa_l(nb % 16);
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
