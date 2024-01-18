#include "monty.h"
/**
 * function_mod - computes d rest of d division of d second
 * top element of d stack by d top element of d stack
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_mod(stack_t **hd, unsigned int indx)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = hfunction_->n % h->n;
	hfunction_->n = aux;
	*hd = hfunction_;
	free(h);
}
