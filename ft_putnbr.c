#include "ft_printf.h"
int ft_putnbr(int nbr)
{
	int count;
	int tmp;
	int c;

	count = 0;
	if(nbr == -2147483648)
	{
		tmp = write(1, "-2147483648", 11);
		return tmp;
	}
	if(nbr < 0)
	{
		nbr = -nbr;
		tmp = write(1, "-", 1);
		if(tmp < 0)
			return (-1);
		count += tmp;
	}
	if(nbr > 9)
		count += ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	tmp = write(1, &c, 1);
	if (tmp < 0)
		return (-1);
	return (count + tmp);
}
