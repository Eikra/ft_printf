/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:04:48 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/08 01:27:19 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list p, char c)
{
	if (!p)
		return (ft_putchar_l(c));
	if (c == 'c')
		return (ft_putchar_l(va_arg(p, int)));
	if (c == 's')
		return (ft_putstr_l(va_arg(p, char *)));
	if (c == 'p')
		return (ft_hdp_d_l(va_arg(p, unsigned long)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_l(va_arg(p, int)));
	if (c == 'u')
		return (ft_putunbr_l(va_arg(p, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hd_d_l(va_arg(p, unsigned int), c));
	if (c == '%')
		return (ft_putchar_l('\%'));
	else
		return (ft_putchar_l(c));
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		l;
	int		i;
	int		persent;

	l = 0;
	i = 0;
	persent = 0;
	va_start(p, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			persent = 1;
			if (s[i] == '\0')
				break ;
		}
		else
			l += ft_putchar_l(s[i]);
		if (persent)
		{
			l += check_format(p, s[i]);
			persent = 0;
		}
		i++;
	}
	va_end(p);
	return (l);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%%c\n");
	ft_printf("%%c\n");
	printf("%%c\n");
}*/