#include "monty.h"
/**
 * f_pall - Prints the stack
 * @head: the head of the stack
 * @counter: counter
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
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