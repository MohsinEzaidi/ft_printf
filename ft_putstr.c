/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:32:07 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/12/04 11:32:08 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	tmp;

	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (str[count])
	{
		tmp = write(1, &str[count], 1);
		if (tmp < 0)
			return (-1);
		count++;
	}
	return (count);
}
