/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:32:05 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/04 11:32:06 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex(unsigned int nbr, char type)
{
	int		count;
	int		tmp;
	char	*uhexchars;
	char	*lhexchars;

	count = 0;
	lhexchars = "0123456789abcdef";
	uhexchars = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_putnbrhex((nbr / 16), type);
	if (type == 'x')
		tmp = write(1, &lhexchars[nbr % 16], 1);
	if (type == 'X')
		tmp = write(1, &uhexchars[nbr % 16], 1);
	if (tmp < 0)
		return (-1);
	return (count + tmp);
}
