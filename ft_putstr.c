#include "ft_printf.h"

int ft_putstr(char *str)
{
	int count;

	if(!str)
		return write(1, "(null)", 6);
	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	
	return count;
}