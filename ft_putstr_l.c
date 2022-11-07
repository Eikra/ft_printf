/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:35:08 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 06:57:46 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_l(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_l("(null)"));
	while (s[i])
	{
		ft_putchar_l(s[i]);
		i++;
	}
	return (i);
}
