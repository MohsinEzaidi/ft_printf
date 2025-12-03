#include "ft_printf.h"
int ft_putunbr(unsigned int nbr)
{
	unsigned int c;
	int count;

	count = 0;
	if(nbr > 9)
		ft_putunbr(nbr / 10);
	c = (nbr % 10) + '0';
	count += write(1, &c, 1);
	return count;
}