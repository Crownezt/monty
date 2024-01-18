#include "monty.h"
/**
 * function_swap - swap d top two elements of d stack.
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_swap(stack_t **hd, unsigned int indx)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next_;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = h->n;
	h->n = h->next_->n;
	h->next_->n = aux;
}
