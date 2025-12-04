#include "ft_printf.h"

int ft_putstr(char *str)
{
	int count;
	int tmp;

	if(!str)
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
