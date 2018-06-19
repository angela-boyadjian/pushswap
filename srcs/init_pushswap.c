/*
** EPITECH PROJECT, 2017
** init_pushswap.c
** File description:
** initialize pushswap function
*/
#include "pushswap.h"

//Get numbers from av and inserts them in the list.
struct node *create_node(int ac, char **av, struct node *head)
{
	int	i = 1;

	while (i < ac) {
		insert_end(&head, my_getnbr(av[i]));
		++i;
	}
	return (head);
}

//Initalize pushswap function.
int init_pushswap(int ac, char **av)
{
	struct node	*s1 = NULL;
	struct node	*s2 = NULL;
	char		*str;
	int		size;

	if (check_arg(ac, av) != 0)
		return (FAILURE);
	s1 = create_node(ac, av, s1);
	size = get_size(s1);
	if (is_sorted(s1) == 1) {
		my_putchar('\n');
		return (SUCCESS);
	}
	str = pushswap(s1, s2, size);
	str[my_strlen(str) - 1] = '\n';
	my_putstr(str);
	return (SUCCESS);
}