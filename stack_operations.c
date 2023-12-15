#include "monty.h"

/**
 * free_stack - Frees the memory allocated for a linked list (stack).
 * @head: Pointer to the head of the linked list.
 *
 * This function iterates through the linked list and frees the memory
 * for each node, preventing memory leaks.
 */

void free_stack(stack_t *head)
{
	while (head != NULL)
	{
		stack_t *temp = head;

		head = head->next;
		free(temp);
	}
}

/**
 * addnode - Adds a new node to the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 *
 * This function allocates memory for a new node, initializes its data,
 * and inserts it at the beginning of the linked list.
 *
 * @head: Pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 */
void addnode(stack_t **head, int n)
{
	 /* Allocate memory for the new node */
	stack_t *new_node = malloc(sizeof(stack_t));
	
	/* Check if malloc was successful */
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/* Initialize the new node's data */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Update the previous pointer of the old head if the list is not empty */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Update the head pointer to the new node */
	*head = new_node;
}

/**
 * f_queue - Switches the stack mode to queue.
 * @head: Stack head.
 * @counter: Line number.
 * Retur: No return.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifo = 1;
}

void addqueue(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		stack_t *temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
}
