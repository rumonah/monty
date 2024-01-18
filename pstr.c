#include "monty.h"
#include <stdio.h>

/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *m;
	(void)counter;

	m = *head;
	while (m)
	{
		if (m->n > 127 || m->n <= 0)
		{
			break;
		}
		printf("%c", m->n);
		m = m->next;
	}
	printf("\n");
}
