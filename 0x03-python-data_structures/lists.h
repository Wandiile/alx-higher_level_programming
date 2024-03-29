#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s - linked list
 * @n: integer
 * @next: pointer to the next node
 * Description: node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(list_t *head);
int is-palindrome(listint_t **head);

#endif
