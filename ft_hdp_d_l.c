/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hdp_d_l.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 07:08:47 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 08:00:32 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_l(unsigned long n)
{
	int	i;

	i = 0;
	
	if (n > 15)
	{
		i += ft_ptr_l(n / 16);
		i += ft_ptr_l(n % 16);
	}
	else if (n >= 0 && n < 10)
	{
		i += (ft_putchar_l(n + '0'));
	}
	else if (n > 9 && n < 16)
	{
		i += (ft_putchar_l(n + 87));
	}
	return (i);
}

int	ft_hdp_d_l(unsigned long n)
{
	int i;

	i = ft_putstr_l("0x");
	i += ft_ptr_l(n);
	return (i);
}