#include "monty.h"

/**
 * f_sub - Subtract the top element of the stack from the second top element.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->n -= (*stack)->n;
	f_pop(stack, line_number);
}
