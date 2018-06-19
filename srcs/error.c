/*
** EPITECH PROJECT, 2017
** error.c
** File description:
** error handling
*/
#include "pushswap.h"

//Returns 84 if arguments are invalid.
int check_arg(int ac, char **av)
{
	if (ac < 2) {
		my_print_err(ERROR_MSG);
		return (FAILURE);
	}
	for (int i = 1; i < ac; ++i) {
		if (my_str_isnum(av[i]) == 0) {
			my_print_err(ERROR_MSG);
			return (FAILURE);
		}
	}
	return (SUCCESS);
}