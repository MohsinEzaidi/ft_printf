/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:30:51 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/11 07:09:16 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_putnbrhex(unsigned int nbr, char type);
int	ft_putadrs(size_t x);
int	ft_putstr(char *str);
int	ft_printf(char *str, ...);

#endif