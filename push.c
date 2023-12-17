#include "monty.h"
/**
 * f_pushqd - add node to the stack
 * @headqd: stack head
 * @counterqd: line_number
 * Returns: no return
*/
void f_pushqd(stack_tqd **headqd, unsigned int counterqd)
{
	int nq, jq = 0, flagq = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jq++;
		for (; bus.arg[jq] != '\0'; jq++)
		{
			if (bus.argq[jq] > 57 || bus.arg[jq] < 48)
				flagq = 1; }
		if (flagq == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counterqd);
			fclose(bus.file);
			free(bus.content);
			free_stack(*headqd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counterqd);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headqd);
		exit(EXIT_FAILURE); }
	nq = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, nq);
	else
		addqueue(head, nq);
}
