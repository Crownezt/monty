#include "monty.h"
/**
 * function_pstr - prints d string starting at d top of d stack,
 * followed by a new
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_pstr(stack_t **hd, unsigned int indx)
{
	stack_t *h;
	(void)indx;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next_;
	}
	printf("\n");
}
