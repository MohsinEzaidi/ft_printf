#include "ft_printf.h"
#include <limits.h>

int ft_idk(int i, char *str, va_list args, int count)
{
		if (str[i] == 'i' || str[i] == 'd')
		return count += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		return count += ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		return count += ft_putnbrhex(va_arg(args, unsigned int), str[i]);
	else if (str[i] == 'p')
		return count += ft_putadrs(va_arg(args, unsigned long int));
	else if (str[i] == 's')
		return count += ft_putstr(va_arg(args, char*));
	else if(str[i] == '%')
		return count += write(1, "%", 1);
	return count;
}

int ft_printf(char *str, ...)
{
	int i;
	va_list args;
	int count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_idk(i, str, args, count);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return count;
}
int main()
{
	ft_printf("hello my name is %s i am %d or %i\n", "Mohsine Ezzaidi", 22, 23);
	printf("hello my name is %s i am %d or %i\n", "Mohsine Ezzaidi", 22, 23);
	return 0;
}
