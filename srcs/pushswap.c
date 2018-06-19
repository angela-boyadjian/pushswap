/*
** EPITECH PROJECT, 2017
** pushswap.c
** File description:
** pushswap function
*/
#include "pushswap.h"

//Prints string and clear buffer.
static void add_operations(char *str, char *op, int *index)
{
	int	i;

	if (*index + 4 > PAGE_SIZE) {
		*index = 0;
		my_putstr(str);
	}
	for (i = 0; i < 3; ++i)
		str[i] = op[i];
	str[i] = 0;
	*index = *index + 3;
}

//Sorts the list if there are negatives numbers and list is not sorted.
static void sort_list(struct node **head, int *index, char *str)
{
	struct node	*tmp = *head;

	while (is_sorted(tmp) == -1) {
		tmp = tmp->next;
		add_operations(str + *index, "ra ", index);
	}
	*head = tmp;
}

//Sorting algorithm : radix sort.
char *pushswap(struct node *s1, struct node *s2, int size)
{
	int	index = 0;
	char	*str = rb_malloc(PAGE_SIZE);

	for (int i = 0; is_sorted(s1) == -1 && i <= 31; ++i) {
		for (int j = 0; j < size; ++j) {
			if (is_bit_set(s1->data, i) == 0) {
				push_to_list(&s1, &s2);
				add_operations(str + index, "pb ", &index);
			} else {
				s1 = s1->next;
				add_operations(str + index, "ra ", &index);
			}
		}
		while (s2 != NULL) {
			push_to_list(&s2, &s1);
			add_operations(str + index, "pa ", &index);
		}
	}
	sort_list(&s1, &index, str);
	return (str);
}