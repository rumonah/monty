#include "monty.h"
#include <stdio.h>

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *t;
	(void)counter;

	t = *head;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
