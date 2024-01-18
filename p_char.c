#include "monty.h"
/**
 * function_pchar - prints d char at d top of d stack,
 * followed by a new line
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_pchar(stack_t **hd, unsigned int indx)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
