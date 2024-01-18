#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly_linked_list representation of a stack (or queue)
 * @n: integer
 * @_prev: refers to d previous element of d stack (or queue)
 * @next_: refers to d next_ element of d stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *_prev;
	struct stack_s *next_;
} stack_t;
/**
 * struct bus_s - variables -args, file, line _content
 * @arg: value
 * @file: pointer to monty file
 * @_content: line _content
 * @lifi: flag change stack <-> queue
 * Description: carries values through d program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *_content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct _instruction - opcode and its function
 * @opcode: d opcode
 * @f: function to handle d opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct _instruction
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int num_line);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *_content);
void function_push(stack_t **hd, unsigned int number);
void function_pall(stack_t **hd, unsigned int number);
void function_pint(stack_t **hd, unsigned int number);
int execute(char *_content, stack_t **hd, unsigned int indx, FILE *file);
void free_stack(stack_t *hd);
void function_pop(stack_t **hd, unsigned int indx);
void function_swap(stack_t **hd, unsigned int indx);
void function_add(stack_t **hd, unsigned int indx);
void function_nop(stack_t **hd, unsigned int indx);
void function_sub(stack_t **hd, unsigned int indx);
void function_div(stack_t **hd, unsigned int indx);
void function_mul(stack_t **hd, unsigned int indx);
void function_mod(stack_t **hd, unsigned int indx);
void function_pchar(stack_t **hd, unsigned int indx);
void function_pstr(stack_t **hd, unsigned int indx);
void function_rotl(stack_t **hd, unsigned int indx);
void function_rotr(stack_t **hd, __attribute__((unused)) unsigned int indx);
void addnode(stack_t **hd, int n);
void addqueue(stack_t **hd, int n);
void function_queue(stack_t **hd, unsigned int indx);
void function_stack(stack_t **hd, unsigned int indx);
#endif
