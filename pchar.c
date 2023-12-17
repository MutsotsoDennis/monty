#include "monty.h"
/**
 * f_pcharqd - prints the char at the top of the stack,
 * @headqd: stack_head
 * @counterqd: line-!number
 * Returns: no return
*/
void f_pcharqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *hqd;

	hqd = **headqd;
	if (!hqd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hqd->n > 127 || hqd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(**headqd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hqd->n);
}
