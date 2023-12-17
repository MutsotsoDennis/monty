#include "monty.h"
/**
 * f_popqd - prints the top
 * @headqd: stack head
 * @counterqd: line_number
 * Returns: no return
*/
void f_popqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *hqd;

	if (**headqd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	hqd = *headqd;
	*headqd = hqd->next;
	free(hqd);
}
