#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 */
void f_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *new_top = current->next;

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
	(*stack)->next = NULL;

	*stack = new_top;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
}

