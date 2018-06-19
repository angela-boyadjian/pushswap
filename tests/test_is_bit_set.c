/*
** EPITECH PROJECT, 2017
** is_bit_set.c
** File description:
** test for function is_bit_set
*/
#include <criterion/criterion.h>
#include "pushswap.h"

bool is_bit_set (int c, int n);

Test(is_bit_set, return_value_is_good)
{
	cr_expect_eq(is_bit_set(42, 0), 0);
	cr_expect_eq(is_bit_set(1, 0), 1);
	cr_expect_eq(is_bit_set(-1, 0), 0);
}

