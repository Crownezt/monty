#include "monty.h"
/**
  *function_sub- sustration
  *@hd: stack hd
  *@indx: num_line
  *Return: no return
 */
void function_sub(stack_t **hd, unsigned int indx)
{
	stack_t *aux;
	int sus, nodes;

	aux = *hd;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next_;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", indx);
		fclose(bus.file);
		free(bus._content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = *hd;
	sus = aux->next_->n - aux->n;
	aux->next_->n = sus;
	*hd = aux->next_;
	free(aux);
}
