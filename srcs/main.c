/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** a main function
*/
#include "pushswap.h"

int main(int ac, char **av)
{
	if (check_arg(ac, av) == FAILURE)
		return (FAILURE);
	init_pushswap(ac, av);
	return (SUCCESS);
}