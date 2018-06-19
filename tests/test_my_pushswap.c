/*
** EPITECH PROJECT, 2017
** test_my_pushswap.c
** File description:
** test
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

int init_pushswap(int ac, char **av);

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(pushswap, output_1, .init = redirect_all_std)
{
	char	*tab[4] = {"./pushswap", "3", "1", "2"};

	init_pushswap(4, tab);
	cr_assert_stdout_eq_str("ra ra pb pa ra ra pb pa\n");
}

Test(pushswap, output_2, .init = redirect_all_std)
{
	char	*tab[4] = {"./pushswap", "1", "2", "3"};

	init_pushswap(4, tab);
	cr_assert_stdout_eq_str("\n");
}

Test(pushswap, output_3, .init = redirect_all_std)
{
	char	*tab[5] = {"./pushswap", "5", "4", "-2", "-1"};

	init_pushswap(5, tab);
	cr_assert_stdout_eq_str("ra pb ra pb pa pa pb ra pb pb pa pa pa ra ra ra ra pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa pb pb ra ra pa pa ra ra\n");
}

Test(pushswap, output_4, .init = redirect_all_std)
{
	char	*tab[4] = {"./pushswap", "-1", "-7", "-5"};

	init_pushswap(4, tab);
	cr_assert_stdout_eq_str("pb pb pb pa pa pa ra pb ra pa pb ra pb pa pa\n");
}

Test(pushswap, output_5, .init = redirect_all_std)
{
	char	*tab[2] = {"./pushswap", ""};

	init_pushswap(2, tab);
	cr_assert_stdout_eq_str("\n");
}