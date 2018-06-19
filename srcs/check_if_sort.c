/*
** EPITECH PROJECT, 2017
** utils.c
** File description:
** utils functions
*/
#include "pushswap.h"

//Returns 1 if list is sorted, -1 if it is not.
int is_sorted(struct node *head)
{
	struct node	*tmp = head;

	if (tmp == NULL)
		return (-1);
	tmp = tmp->next;
	while (tmp != head) {
		if (tmp->prev->data > tmp->data)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}
