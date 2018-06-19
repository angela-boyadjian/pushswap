/*
** EPITECH PROJECT, 2017
** bit_check.c
** File description:
** check if bit is set and if negative
*/
#include "pushswap.h"

//Checks if bit is negative
int is_bit_neg(int x)
{
	return (1 & (x >> 31));
}

//Return 1 if bit is set, 0 if it is not.
bool is_bit_set (int c, int n)
{
	if (is_bit_neg(c) == 1)
		return (!(1 & ((~c + 1) >> n)));
	return (1 & (c >> n));
}
