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
 * struct stack_s - Doubly link list representation of stack (or queue)
 * @n: integer
 * @prev: point previous element of stack (or queue)
 * @next: next element ofstack (or queue)
 * Description: doubly link list node structure
 *  stack, queues, LIFO, FIFO proj
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struc bus_s - Variables -args, file, line 
 * @arg: value
 * @file: poin monty file
 * @content: Content
 * @lifi: Flag change stack <-> queue
 * Description: Carry value through program
 */
typedef struc bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction - Opcode and function
 * @opcode: Opcode
 * @f: Function handle the opcode
 * Desction: Opcode and its function
 *  stack, queues, LIFO, FIFO Holberton
 */
typedef struct instruction
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void x_push(stack_t **head, unsigned int number);
void x_pall(stack_t **head, unsigned int number);
void x_pint(stack_t **head, unsigned int number);
void x_mul(stack_t **head, unsigned int counter);
void x_mod(stack_t **head, unsigned int counter);
void x_pchar(stack_t **head, unsigned int counter);
void x_pstr(stack_t **head, unsigned int counter);
void x_rotl(stack_t **head, unsigned int counter);
void x_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void x_queue(stack_t **head, unsigned int counter);
void x_stack(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void x_pop(stack_t **head, unsigned int counter);
void x_swap(stack_t **head, unsigned int counter);
void x_nop(stack_t **head, unsigned int counter);
void x_sub(stack_t **head, unsigned int counter);
void x_div(stack_t **head, unsigned int counter);
void x_add(stack_t **head, unsigned int counter);

#endif
