#include "monty.h"
/**
* free_stackqd - frees a doubly linked list
* @headqd: head of the stack
*/
void free_stackqd(stack_tqd *headqd)
{
	stack_tqd *auxqd;

	auxqd = headqd;
	while (headqd)
	{
		auxqd = headqd->next;
		free(headqd);
		headqd = auxqd;
	}
}
