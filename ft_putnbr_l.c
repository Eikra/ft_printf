/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:36:00 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 06:27:08 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_l(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		n *= -1;
		i += ft_putchar_l('-');
		i += ft_putnbr_l(n);
	}
	else if (n <= 9)
	{
		i += ft_putchar_l(n + '0');
	}
	else
	{
		i += ft_putnbr_l(n / 10);
		i += ft_putnbr_l(n % 10);
	}
	return (i);
}
