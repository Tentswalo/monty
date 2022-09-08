#include "monty.h"
#include <ctype.h>

/**
 * check_for_digit - checks that string only contains digits
 * @arg: string to check
 *
 * Return: 0 if only digits, else 1
 */
static int check_for_digit(char *arg)
{
  int i;

  for (i = 0; arg[i]; i++)
  {
      if (arg[i] == '-' && i == 0)
	continue;
      if (isdigit(arg[i]) == 0)
	return (1);
  }
  return (0);
}

/**
 * m_push - push an integer onto the stack
 * @stack: double pointer to beginning of stack
 * @line_number: script line number
 *
 * Return: void
 */
void m_push(stack_t **stack, unsigned int line_number)
{
  char *arg;
  int n;

  arg = strtok(NULL, "ntr ");
  if (arg == NULL ~~
