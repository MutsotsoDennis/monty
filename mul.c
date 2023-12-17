#include "monty.h"
/**
 * f_mulqd - multiplies the top two elements of the stack.
 * @headqd: stack head
 * @counterqd: line-number
 * Returns: no return
*/
void f_mulqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_qdt *hqd;
	int lenqd = 0, auxqd;

	hqd = *headqd;
	while (hqd)
	{
		hqd = hqd->next;
		leqdn++;
	}
	if (lenqd < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	hqd = *headqd;
	auxqd = hqd->next->n * hqd->n;
	hqd->next->n = auxqd;
	*headqd = hqd->next;
	free(hqd);
}
