/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:54:14 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/08 15:04:08 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_l(char c);
int	ft_putnbr_l(int n);
int	ft_putstr_l(char *s);
int	ft_put_unbr_l(unsigned int n);
int	ft_hd_d_l(unsigned int n, char c);
int	ft_hdp_d_l(unsigned long n);

#endif
