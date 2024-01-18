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
	if (*hd == NULL || (*hd)function_ == NULL)
	{
		return;
	}
	while (copyfunction_)
	{
		copy = copyfunction_;
	}
	copyfunction_ = *hd;
	copy->_prevfunction_ = NULL;
	copy->_prev = NULL;
	(*hd)->_prev = copy;
	(*hd) = copy;
}
