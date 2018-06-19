/*
** EPITECH PROJECT, 2017
** pushswap.h
** File description:
** header for pushswap
*/
#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include "my.h"
#include "error.h"

#define PAGE_SIZE 99999999

struct node {
	int		data;
	struct node	*next;
	struct node	*prev;
};

void display_list(struct node *head);
int		get_size(struct node *head);
void		print_list(struct node *);
void 		push(struct node **, int);
void 		insert_end(struct node **, int);
void 		insert_begin(struct node **, struct node *);
void 		swap_nodes(struct node *, struct node *);
void 		push_to_list(struct node **, struct node **);
struct node	*del_node(struct node **, int);
struct node	*create_node(int, char **, struct node *);
int		is_sorted(struct node *head);
bool		is_bit_set(int c, int n);
char		*pushswap(struct node *s1, struct node *s2, int size);
int		check_arg(int ac, char **av);
int		init_pushswap(int ac, char **av);
int		is_bit_neg(int x);

#endif /* !PUSHSWAP_H_ */