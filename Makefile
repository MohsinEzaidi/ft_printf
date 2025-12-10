AR = ar rcs

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRC = ft_printf.c ft_putadrs.c ft_putchar.c ft_putnbr.c ft_putnbrhex.c ft_putstr.c ft_putunbr.c

OBJ = $(SRC:.c=.o)

NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean