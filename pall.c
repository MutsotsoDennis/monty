#include "monty.h"
/**
 * f_pallqd - prints the stack
 * @headqd: stack head
 * @counterqd: no used
 * Returns: no return
*/
void f_pallqd(stack_tqd **headqd, unsigned int counterqd)
{
	stack_tqd *h;
	(void)counterqd;

	hqd = *headqd;
	if (hqd == NULL)
		return;
	while (hqd)
	{
		printf("%d\n", hqd->n);
		hqd = hqd->next;
	}
}
