/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 07:05:06 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 07:13:12 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_l(unsigned int n)
{
	int i;

	i = 0;
	if (n <= 9)
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