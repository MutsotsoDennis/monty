#include "monty.h"
/**
 * addnodeqd - add node to the head stack
 * @headqd: head of the stack
 * @nqd: new_value
 * Returns: no return
*/
void addnodeqd(stack_tqd **headqd, int nqd)
{

	stack_tqd *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_tqd));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = nqd;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
