#include "monty.h"
/**
  *f_rotrqd- rotates the stack to the bottom
  *@headqd: stack head
  *@counterqd: line_number
  *Returns: no return
 */
void f_rotrqd(stack_tqd **headqd, attributeqd((unused)) unsigned int counterqd)
{
	stack_tqd *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
