#include "monty.h"
/**
 * f_swapqd - + the top 2 elements of the stack.
 * @headqd: stack head
 * @counterqd: line_number
 * Returns: no return at all
*/
void f_swapqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *hqd;
	int lenqd = 0, auxqd;

	hqd = *headqd;
	while (hqd)
	{
		hqd = hqd->next;
		lenqd++;
	}
	if (lenqd < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	hqd = *headqd;
	auxqd = hqd->n;
	hqd->n = hqd->next->n;
	hqd->next->n = auxqd;
}
