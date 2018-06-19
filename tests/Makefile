##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## a Makefile for tests
##

SRC_DIR=	$(realpath ..)

SRC=		$(SRC_DIR)/srcs/pushswap.c \
		$(SRC_DIR)/srcs/bit_check.c \
		$(SRC_DIR)/srcs/error.c \
		$(SRC_DIR)/srcs/init_pushswap.c \
		$(SRC_DIR)/srcs/steps_for_solving.c \
		$(SRC_DIR)/srcs/check_if_sort.c

SRC_UT_DIR=	$(realpath .)

SRC_UT=		$(SRC_UT_DIR)/test_my_pushswap.c \
		$(SRC_UT_DIR)/test_error.c \
		$(SRC_UT_DIR)/test_is_bit_set.c

GCDA_FILES=     $(SRC:.c=.gcda) $(SRC_UT:.c=.gcda)

GCNO_FILES=     $(SRC:.c=.gcno) $(SRC_UT:.c=.gcno)

OBJ=		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS= 	-Wall -Wextra --coverage -I../include -g3

LDFLAGS=	-lcriterion -lgcov -L../lib -lmy

NAME=		units

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ../lib/my/ re
		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f $(GCDA_FILES)
		rm -f $(GCNO_FILES)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all