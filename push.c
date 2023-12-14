#include "monty.h"

/**
 * push - Adds node to stack or queue.
 * @stack: Pointer to the stack or queue.
 * @line_numebr: Linenumber to the file
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n, j = 0, flag = 0;

	if (!bus.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", (int)line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	if (bus.arg[0]== '_')
		j++;

	for (; bus.arg[j]!= '\0'; j++)
	{
		if (bus.arg[j] > '9' || bus.arg[j] < '0')
			flag = 1;
	}
	
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", (int)line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	n=atoi(bus.arg);

	if (bus.lifo ==0)
		addnode(stack, n);
	else
		addqueue(stack, n);
}
