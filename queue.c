#include "monty.h"
/**
 * f_queueqd - prints the top
 * @headqd: stack head
 * @counterqd: line_number
 * Returns: no return atall
*/
void f_queueqd(stack_tqd **headqd, unsigned int counterqd)
{
	(void)headqd;
	(void)counterqd;
	bus.lifi = 1;
}

/**
 * addqueueqd - add node2 the tail stack
 * @nqd: new value@
 * @head: head of the stack!
 * Return: no return nothing at all
*/
void addqueueqd(stack_tqd **headqd, int nqd)
{
	stack_tqd *new_nodeqd, *auxqd;

	auxqd = *headqd;
	new_nodeqd = malloc(sizeof(stack_tqd));
	if (new_nodeqd == NULL)
	{
		printf("Error\n");
	}
	new_nodeqd->nqd = nqd;
	new_nodeqd->next = NULL;
	if (auxqd)
	{
		while (auxqd->next)
			auxqd = auxqd->next;
	}
	if (!auxqd)
	{
		*headqd = new_nodeqd;
		new_nodeqd->prev = NULL;
	}
	else
	{
		aux->nextqd = new_nodeqd;
		new_nodeqd->prev = auxqd;
	}
}
