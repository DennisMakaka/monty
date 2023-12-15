#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 */
void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		(void)line_number;
		return;
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = *stack;
	(*stack)->prev = current;

	*stack = current->next;
	(*stack)->prev = NULL;
	current->next = NULL;
}
