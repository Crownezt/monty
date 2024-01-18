#include "monty.h"
/**
  *function_rotl- rotates d stack to d top
  *@hd: stack hd
  *@indx: num_line
  *Return: no return
 */
void function_rotl(stack_t **hd,  __attribute__((unused)) unsigned int indx)
{
	stack_t *tmp = *hd, *aux;

	if (*hd == NULL || (*hd)->next_ == NULL)
	{
		return;
	}
	aux = (*hd)->next_;
	aux->_prev = NULL;
	while (tmp->next_ != NULL)
	{
		tmp = tmp->next_;
	}
	tmp->next_ = *hd;
	(*hd)->next_ = NULL;
	(*hd)->_prev = tmp;
	(*hd) = aux;
}
