#include "monty.h"
/**
 * function_mul - multiplies d top two elements of d stack.
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_mul(stack_t **hd, unsigned int indx)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = hfunction_;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = hfunction_->n * h->n;
	hfunction_->n = aux;
	*hd = hfunction_;
	free(h);
}
