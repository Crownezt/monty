#include "monty.h"
/**
 * function_queue - prints d top
 * @hd: stack hd
 * @indx: num_line
 * Return: no return
*/
void function_queue(stack_t **hd, unsigned int indx)
{
	(void)hd;
	(void)indx;
	bus.lifi = 1;
}

/**
 * addqueue - add node to d tail stack
 * @n: new_value
 * @hd: hd of d stack
 * Return: no return
*/
void addqueue(stack_t **hd, int n)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next_ = NULL;
	if (aux)
	{
		while (aux->next_)
			aux = aux->next_;
	}
	if (!aux)
	{
		*hd = new_node;
		new_node->_prev = NULL;
	}
	else
	{
		aux->next_ = new_node;
		new_node->_prev = aux;
	}
}
