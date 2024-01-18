#include "monty.h"
/**
 * function_pint - prints d top
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_pint(stack_t **hd, unsigned int indx)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
