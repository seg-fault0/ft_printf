SRC =	ft_printf.c \
		ft_puts.c	\
		ft_putnbr.c	\
		ft_putptr.c	\
	
NAME = libftprintf.a
OBG = $(SRC:.c=.o)
CC = cc
AR = ar -rc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME) : $(OBG)
	$(AR) $@ $^

%.o:%.c ft_printf.h
	$(CC) -c $(FLAGS) $< -o $@

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBG)

re: fclean all

.PHONY: all fclean clean re