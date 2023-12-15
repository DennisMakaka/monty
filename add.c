#include "monty.h"

/**
 * f_add - Add the top two elements of thr stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 */

void f_add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	f_pop(stack, line_number); /* Remove te top element */
}
