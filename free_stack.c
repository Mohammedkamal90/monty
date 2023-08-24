#include "monty.h"

/**
* free_stack - FREE DoublE link lisT
* @head: HEAD stacK
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
