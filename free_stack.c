#include "monty.h"
#include <stdio.h>

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *mode;

	mode = head;
	while (head)
	{
		mode = head->next;
		free(head);
		head = mode;
	}
}
