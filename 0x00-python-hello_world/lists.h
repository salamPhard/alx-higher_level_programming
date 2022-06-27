#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * structs_listings - singly linked list
 * @n: integer
 * @next: point to the next node
 *
 * Desctiption: singly linked list
 */

typedef struct listint_s
{
	int n;
	struct listing_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /*LISTS_H*/
