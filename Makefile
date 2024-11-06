SRC =	ft_printf.c \
		ft_puts.c	\
		ft_putnbr.c	\
		ft_putptr.c	\
	
LIBNAME = libftprintf.a
OBG = $(SRC:.c=.o)
CC = cc
AR = ar -rc
FLAGS = -Wall -Wextra -Werror

all: $(LIBNAME)

$(LIBNAME) : $(OBG) ft_printf.h
	$(AR) $@ $^

%.o:%.c
	cc -c $(FLAGS) $< -o $@

fclean: clean
	rm -f $(LIBNAME)

clean:
	rm -f $(OBG)

re: all

.PHONY: all fclean clean re