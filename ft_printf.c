/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:30:44 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/04 14:29:03 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <libc.h>

int	ft_check(int i, char *str, va_list args)
{
	int	count;

	count = 0;
	if (str[i] == 'i' || str[i] == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_putnbrhex(va_arg(args, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_putadrs(va_arg(args, unsigned long int));
	else if (str[i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (str[i] == 'c')
		count += ft_putchar(va_arg(args, short int));
	else if (str[i] == '%')
		count += write(1, "%", 1);
	else
		count += write(1, str+i, 1);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_printf(char *str, ...)
{
	int		i;
	va_list	args;
	int		count;
	int		tmp;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			tmp = ft_check(i, str, args);
		}
		else
			tmp = write(1, &str[i], 1);
		if (tmp < 0)
			return (-1);
		count += tmp;
		i++;
	}
	va_end(args);
	return (count);
}
