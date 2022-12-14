#include "monty.h"

/**
 * m_pint - print value on top of stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
  stack_t *head = *stack;

  if (var.stack_len == 0)
  {
      dprintf(STDOUT_FILEON,
	      "L%u: can't pint, stack empty\n",
	      line_number);
      exit(EXIT_FAILURE);
  }
  printf("%d\n", head->n);
}
