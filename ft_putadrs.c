#include "ft_printf.h"

int print_hex(unsigned long int n)
{
	int count;
	char *lhexchars;
	char c;

	lhexchars = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hex(n / 16);
	c = lhexchars[n % 16];
	return count += write(1, &c, 1);
}
int ft_putadrs(unsigned long int x)
{
	int count;
	unsigned long int nbr;

	count = 0;
	nbr = (unsigned long int)x;
	count += write(1, "0x", 2);
	count += print_hex(nbr);
	return count;
}