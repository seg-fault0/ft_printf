SRC =	ft_printf.c \
		ft_puts.c	\
		ft_putnbr.c	\
		ft_putptr.c	\
	
NAME = libftprintf.a
OBG = $(SRC:.c=.o)
CC = cc
AR = ar -rc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBG)
	$(AR) $@ $^

%.o:%.c ft_printf.h
	cc -c $(FLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBG)

re: all

.PHONY: all fclean clean re