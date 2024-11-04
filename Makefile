SRC = main.c ft_putstr.c ft_printf.c
OBG = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:
	cc $(FLAGS) $(SRC)

%.o:%.c
	cc -c $(FLAGS) $< -o $@

clean:
	rm -f *.o

re: all

.PHONY: prog all