##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## A Makefile for projetcs
##

CC	=	gcc

RM	=	rm -rf

CFLAGS	+=	-Wall -Wextra -O3

CFLAGS	+=	-I./include

NAME	=	push_swap

SRCS	=	srcs/main.c \
		srcs/steps_for_solving.c \
		srcs/display_list.c \
		srcs/init_pushswap.c \
		srcs/check_if_sort.c \
		srcs/bit_check.c \
		srcs/error.c \
		srcs/pushswap.c

OBJS	=	$(SRCS:.c=.o)

LIB =		-L./lib -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my
	$(CC) $(OBJS) -o $(NAME) $(LIB)

clean:
	$(RM) $(OBJS)
	make -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(RM) lib/*.a
	make -C ./lib/my fclean


re: fclean all

.PHONY: all clean fclean re
