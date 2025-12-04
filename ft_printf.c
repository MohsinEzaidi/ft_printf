#include "ft_printf.h"
#include <limits.h>

int ft_idk(int i, char *str, va_list args)
{
	int count;

	count = 0;
	if (str[i] == 'i' || str[i] == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_putnbrhex(va_arg(args, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_putadrs(va_arg(args, unsigned long int));
	else if (str[i] == 's')
		count += ft_putstr(va_arg(args, char*));
	else if (str[i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if(str[i] == '%')
		count += write(1, "%", 1);
	if (count < 0)
		return (-1);
	return (count);
}

int ft_printf(char *str, ...)
{
	int i;
	va_list args;
	int count;
	int tmp;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			tmp = ft_idk(i, str, args);
		}
		else
			tmp = write(1, &str[i], 1);
		if (tmp < 0)
			return (-1);
		count += tmp;
		i++;
	}
	va_end(args);
	return count;
}
// int main()
// {
// 	char *c = "FUCK";
// 	   printf("the count is: %d\n", printf("%d %u %c %s %s %s %p %x %X:",100961024,1950449368,'',"world",ft_printf,"hello",&c,0x4036c4d1,0x4BB39646));
// 	printf("the count is: %d\n", ft_printf("%d %u %c %s %s %s %p %x %X:",100961024,1950449368,'',"world",ft_printf,"hello",&c,0x4036c4d1,0x4BB39646));
// 	// printf("the count is: %d\n", ft_printf("%p\n", &c));
// 	// ft_printf("%X\n", 0xA564B4);
// 	return 0;
// }
