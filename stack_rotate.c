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

	if (*hd == NULL || (*hd)function_ == NULL)
	{
		return;
	}
	aux = (*hd)function_;
	aux->_prev = NULL;
	while (tmpfunction_ != NULL)
	{
		tmp = tmpfunction_;
	}
	tmpfunction_ = *hd;
	(*hd)function_ = NULL;
	(*hd)->_prev = tmp;
	(*hd) = aux;
}
