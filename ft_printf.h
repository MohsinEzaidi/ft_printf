#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int ft_printf(char *str, ...);
int	ft_putchar(int c);
int ft_putnbr(int nbr);
int ft_putunbr(unsigned int nbr);
int ft_putnbrhex(unsigned int nbr, char type);
int ft_putadrs(unsigned long int x);
int ft_putstr(char *str);

#endif