#include "monty.h"
/**
 * f_pintqd - prints the top!
 * @headqd: stack headqd
 * @counterqd: line-!number
 * Returns: no return at
*/
void f_pintqd(stack_tqd **headqd, unsigned int counterqd)
{
	if (*headqd == NULL)
	{
		fprintf(stderr, "L%u: cannot pint, stack empty\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*headqd)->n);
}
