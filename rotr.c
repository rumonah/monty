#include "monty.h"
#include <stdio.h>

/**
 *f_rotr- rotates the stack to the bottom
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *duplicate;

	duplicate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}
	duplicate->next = *head;
	duplicate->prev->next = NULL;
	duplicate->prev = NULL;
	(*head)->prev = duplicate;
	(*head) = duplicate;
}
