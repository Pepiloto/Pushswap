##
## EPITECH PROJECT, 2019
## CPE_pushswap_2019
## File description:
## Makefile
##

######### FLAGS #########
CFLAGS	=	-Wall -Wextra -Wshadow -O3 -finline-functions

CPPFLAGS = -iquote $(IDIR)

DBGFLAGS = -g3 -ggdb

LDFLAGS = -L lib/my/ -lmy

######### SOURCES #########
SRC =	src/put_in_bin.c	\
		src/l_a.c			\
		src/main.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

IDIR	=	./include

CC	=	gcc

######### Rules ###########
all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
	rm -f $(OBJ)

debug: CFLAGS += $(DBGFLAGS)
debug: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all

.PHONY: fclean clean all re debug

tests_run:	LDFLAGS	+= -lcriterion --coverage
tests_run:
		gcc -o unit_tests src/l_a.c src/pushswap.c src/put_in_bin.c $(CPPFLAGS) $(LDFLAGS)
		./unit_tests
		gcovr -e tests/
