#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *mad;
	int luk, nodes;

	mad = *head;
	for (nodes = 0; mad != NULL; nodes++)
		mad = mad->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mad = *head;
	luk = mad->next->n - mad->n;
	mad->next->n = luk;
	*head = mad->next;
	free(mad);
}
