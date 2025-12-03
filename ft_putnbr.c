#include "ft_printf.h"
int ft_putnbr(int nbr)
{
	int count;
	int c;

	count = 0;
	if(nbr == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return count;
	}
	if(nbr < 0)
	{
		nbr = -nbr;
		count += write(1, "-", 1);
	}
	if(nbr > 9)
		count += ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	count += write(1, &c, 1);
	return count;
}
