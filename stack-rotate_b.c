#include "monty.h"
/**
  *function_rotr- rotates d stack to d bottom
  *@hd: stack hd
  *@indx: num_line
  *Return: no return
 */
void function_rotr(stack_t **hd, __attribute__((unused)) unsigned int indx)
{
	stack_t *copy;

	copy = *hd;
	if (*hd == NULL || (*hd)->next_ == NULL)
	{
		return;
	}
	while (copy->next_)
	{
		copy = copy->next_;
	}
	copy->next_ = *hd;
	copy->_prev->next_ = NULL;
	copy->_prev = NULL;
	(*hd)->_prev = copy;
	(*hd) = copy;
}
