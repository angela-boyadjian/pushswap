/*
** EPITECH PROJECT, 2017
** test_error.c
** File description:
** test
*/
#include <criterion/criterion.h>
#include "pushswap.h"

int check_arg(int, char **);

Test(check_arg, return_value_is_good_v1)
{
	char *str[] = {"3", "4", "1"};

	cr_expect_eq(check_arg(3, str), 0);
}

Test(check_arg, return_value_is_good_v2)
{
	char *str[] = {"3", "4", "-1"};

	cr_expect_eq(check_arg(3, str), 0);
}

Test(check_arg, return_value_is_good_v3)
{
	char *str[] = {"3", "4", "-1["};

	cr_expect_eq(check_arg(3, str), 84);
}

Test(check_arg, return_value_is_good_v4)
{
	char *str[] = {"3", "4", "["};

	cr_expect_eq(check_arg(3, str), 84);
}

Test(check_arg, return_value_is_good_v5)
{
	char *str[] = {""};

	cr_expect_eq(check_arg(1, str), 84);
}