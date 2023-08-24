#include "monty.h"

/**
 * x_pall - Print stack
 * @head: Stack 
 * @counter: NoN used
 * return: NON return
*/
void x_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
