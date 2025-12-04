/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:31:56 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/04 11:31:57 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long int n)
{
	int		count;
	int		tmp;
	char	*lhexchars;
	char	c;

	lhexchars = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hex(n / 16);
	c = lhexchars[n % 16];
	tmp = write(1, &c, 1);
	if (tmp < 0)
		return (-1);
	return (tmp + count);
}

int	ft_putadrs(unsigned long int x)
{
	int					count;
	int					tmp;
	unsigned long int	nbr;

	nbr = (unsigned long int)x;
	count = write(1, "0x", 2);
	if (count < 0)
		return (-1);
	tmp = print_hex(nbr);
	if (tmp < 0)
		return (-1);
	return (count + tmp);
}
