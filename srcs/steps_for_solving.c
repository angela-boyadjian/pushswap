/*
** EPITECH PROJECT, 2017
** doubly_ll.c
** File description:
** doubly linked list
*/
#include "pushswap.h"

//Returns the size of the list.
int get_size(struct node *head)
{
	int		i = 1;
	struct node	*tmp = head;

	if (tmp == NULL)
		return (0);
	while (tmp->next != head) {
		++i;
		tmp = tmp->next;
	}
	return (i);
}

//Deletes the given node.
struct node *del_node(struct node **head, int nb)
{
	struct node	*tmp = *head;
	struct node	*prev = NULL;

	while (nb-- > 0)
		tmp = tmp->next;
	if (tmp->next == tmp && tmp->prev == tmp) {
		(*head) = NULL;
		return (tmp);
	}
	prev = tmp->prev;
	tmp->prev->next = tmp->next;
	tmp->next->prev = prev;
	*head = tmp->next;
	return (tmp);
}

//Inserts at the end of the list.
void insert_end(struct node **head, int value)
{
	struct node	*new_node = malloc(sizeof(struct node));
	struct node	*last;

	if (*head == NULL) {
		struct node *new_node = malloc(sizeof(struct node));
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*head = new_node;
		return;
	}
	last = (*head)->prev;
	new_node->data = value;
	new_node->next = *head;
	(*head)->prev = new_node;
	new_node->prev = last;
	last->next = new_node;
}

//Inserts at the beggining of the list.
void insert_begin(struct node **head, struct node *n)
{
	if (*head == NULL) {
		n->next = n;
		n->prev = n;
		*head = n;
		return;
	}
	n->next = *head;
	n->prev = (*head)->prev;
	(*head)->prev = n;
	n->prev->next = n;
	(*head) = n;
}

//Pushes to the given list : pa ; pb.
void push_to_list(struct node **s1, struct node **s2)
{
	insert_begin(s2, del_node(s1, 0));
}