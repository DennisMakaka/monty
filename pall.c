#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number in te file.
 */
void pall(stack_t **stack, unsigned int line_number)
{

	/* Declare variables at the beginning of the function */
	stack_t *current = *stack;

	(void)line_number; /*Unused parameter */
	
	/* Traverse the stack and print values from the top */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
