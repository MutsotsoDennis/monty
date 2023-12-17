#include "monty.h"
/**
  *f_subqd- sustration
  *@headqd: stack head
  *@counterqd: line_number
  *Returnqd: no return
 */
void f_subqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *auxqd;
	int susqd, nodesqd;

	auxqd = *head;
	for (nodesqd = 0; auxqd != NULL; nodesqd++)
		auxqd = auxqd->next;
	if (nodesqd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxqd = *head;
	susqd = auxqd->next->n - auxqd->n;
	auxqd->next->n = susqd;
	*head = auxqd->next;
	free(auxqd);
}
