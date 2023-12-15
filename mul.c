#include "monty.h"

/**
 * f_mul - Multiply the second top element of the stack by the top element.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	f_pop(stack, line_number);
}
