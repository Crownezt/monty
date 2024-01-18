#include "monty.h"
/**
 * addnode - add node to d hd stack
 * @hd: hd of d stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **hd, int n)
{

	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->_prev = new_node;
	new_node->n = n;
	new_node->next_ = *hd;
	new_node->_prev = NULL;
	*hd = new_node;
}
