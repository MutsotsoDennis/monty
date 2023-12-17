#include "monty.h"
/**
  *f_rotlqd- rotates the stack to the top
  *@headqd: stack head
  *@counterqd: line_number
  *Returns: no return
 */
void f_rotlqd(stack_tqd **head, attributeqd((unused)) unsigned int counterqd)
{
	stack_tqd *tmpqd = *headqd, *auxqd;

	if (*headqd == NULL || (*headqd)->next == NULL)
	{
		return;
	}
	auxqd = (*headqd)->next;
	auxqd->prev = NULL;
	while (tmpqd->next != NULL)
	{
		tmpqd = tmpqd->next;
	}
	tmpqd->next = *headqd;
	(*headqd)->next = NULL;
	(*headqd)->prev = tmpqd;
	(*headqd) = auxqd;
}
