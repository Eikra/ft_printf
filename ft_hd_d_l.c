/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hd_d_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:37:10 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 07:28:22 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hd_d_l(unsigned int n, char c)
{
	int	i;

	i = 0;
	if (n > 15)
	{
		i += ft_hd_d_l(n / 16, c);
		i += ft_hd_d_l(n % 16, c);
	}
	else if (n >= 0 && n < 10)
	{
		i += (ft_putchar_l(n + '0'));
	}
	else if (n > 9 && n < 16)
	{
		if (c == 'X')
			i += (ft_putchar_l(n + 55));
		if (c == 'x')
			i += (ft_putchar_l(n + 87));
	}
	return (i);
}
