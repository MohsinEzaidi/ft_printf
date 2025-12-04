#include "ft_printf.h"
int ft_putnbrhex(unsigned int nbr, char type)
{
	int count;
	int tmp;
	char *uhexchars;
	char *lhexchars;

	count = 0;
	lhexchars = "0123456789abcdef";
	uhexchars = "0123456789ABCDEF";
	if(nbr >= 16)
		count += ft_putnbrhex((nbr / 16), type);
	if(type == 'x')
		tmp = write(1, &lhexchars[nbr % 16], 1);
	if(type == 'X')
		tmp = write(1, &uhexchars[nbr % 16], 1);
	if (tmp < 0)
		return (-1);
	return (count + tmp);
}
