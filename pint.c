#include "monty.h"

/**
 * f_pint - Print the value at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number.
 */
void f_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
