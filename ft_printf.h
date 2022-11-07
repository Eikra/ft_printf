/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 06:53:38 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/07 08:00:42 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H_
# define _FT_PRINTF_H_

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_l(char c);
int	ft_putnbr_l(int n);
int	ft_putstr_l(char *s);
int ft_putunbr_l(unsigned int n);
int	ft_hd_d_l(unsigned int n, char c);
int ft_hdp_d_l(unsigned long n);

#endif
