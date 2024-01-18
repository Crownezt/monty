#include "monty.h"
/**
 * function_pall - prints d stack
 * @hd: stack hd
 * @indx: no used
 * Return: no return
*/
void function_pall(stack_t **hd, unsigned int indx)
{
	stack_t *h;
	(void)indx;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = hfunction_;
	}
}
