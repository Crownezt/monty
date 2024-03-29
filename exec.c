#include "monty.h"
/**
* execute - executes d opcode
* @stack: hd linked list - stack
* @indx: line_counter
* @file: poiner to monty file
* @_content: line _content
* Return: no return
*/
int execute(char *_content, stack_t **stack, unsigned int indx, FILE *file)
{
	instruction_t opst[] = {
				{"push", function_push}, {"pall", function_pall}, {"pint", function_pint},
				{"pop", function_pop},
				{"swap", function_swap},
				{"add", function_add},
				{"nop", function_nop},
				{"sub", function_sub},
				{"div", function_div},
				{"mul", function_mul},
				{"mod", function_mod},
				{"pchar", function_pchar},
				{"pstr", function_pstr},
				{"rotl", function_rotl},
				{"rotr", function_rotr},
				{"queue", function_queue},
				{"stack", function_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(_content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, indx);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", indx, op);
		fclose(file);
		free(_content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
