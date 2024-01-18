#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @hd: hd of d stack
*/
void free_stack(stack_t *hd)
{
	stack_t *aux;

	aux = hd;
	while (hd)
	{
		aux = hd->next_;
		free(hd);
		hd = aux;
	}
}
