/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:32:10 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/04 11:32:11 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	unsigned int	c;
	int				count;
	int				tmp;

	count = 0;
	if (nbr > 9)
		count += ft_putunbr(nbr / 10);
	c = (nbr % 10) + '0';
	tmp = write(1, &c, 1);
	if (tmp < 0)
		return (-1);
	return (count + tmp);
}
