#include "monty.h"
/**
 * f_divqd - divides the top two elements of the stack.
 * @headqd: stack head
 * @counterqd: line_number
 * Returns: no return
*/
void f_divqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *hqd;
	int lenqd = 0, auxqd;

	hqd = *head;
	while (hqd)
	{
		hqd = hqd->next;
		lenqd++;
	}
	if (lenqd < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	hqd = *headqd;
	if (hqd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	auxqd = hqd->next->n / hqd->n;
	hqd->next->n = auxqd;
	*headqd = hqd->next;
	free(hqd);
}
