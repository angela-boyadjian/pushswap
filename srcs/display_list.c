/*
** EPITECH PROJECT, 2017
** display_list.c
** File description:
** displas list
*/
#include "pushswap.h"

void display_list(struct node *head)
{
	struct node *tmp = head;

	while (tmp->next != head) {
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->data);
}