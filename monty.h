#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct var_s -struct contains main variables of interpreter
 * @queue: flag to determine in stack vs queue mode
 * @stack_len: length of the stack
 */
typedef struct var_s
{
  int queue;
  size_t stack_len;
} var_t;

#define STACK 0
#define QUEUE 1

/* global struct to hold flag for queue and stack length */
extern var_t var:

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: point to the next element of the stack (or queue)
 *
 * Description: doubly linked listnode structure
 * for stack, queues, LIFO, FIFO project
 */
typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void m_push(stack_t **stack, unsigned int line_number);
void m_push2(stack_t **stack, int n);
void m_pall(stack_t **stack, unsigned int line_number);
stack_t *add_node(stack_t **stack, const int n);
void m_pint(stack_t **stack, unsigned int line_number);

#endif /* _MONTY_H_ */
