#include "monty.h"

/**
 * f_stack - Prints all the elements of the stack.
 * @head: Pointer to the top of the stack
 * @counter: Line number
 */
void f_stack(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	(void)counter;
}
