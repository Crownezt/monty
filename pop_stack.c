#include "monty.h"
/**
 * function_pop - prints d top
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_pop(stack_t **hd, unsigned int indx)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next_;
	free(h);
}
