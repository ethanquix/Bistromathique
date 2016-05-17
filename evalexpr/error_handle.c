/*
** error_handle.c for bistro in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/evalexpr
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Fri Apr  1 23:03:08 2016 Dimitri Wyzlic
** Last update Sun Apr  3 23:22:11 2016 Hugo Laroche
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "bistromathique.h"

int	is_there_a_nbr(char *str, char *nb)
{
  int	i;
  int	j;

  i = 0;
  while (str[i])
    {
      j = 0;
      while (nb[j])
	{
	  if (nb[j] == str[i])
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	error_syntax(char *msg)
{
  int	i;

  i = 0;
  while (msg[i])
    {
      write(2, &msg[i], 1);
      i = i + 1;
    }
  return (1);
}

int	error_usage(char **av)
{
  my_putstr("Usage : ");
  my_putstr(av[0]);
  my_putstr(" base ops\"()+-*/%\" exp_len\n");
  return (1);
}

int	test_expr(char *base, char *sym, char *expr)
{
  int	i;

  i = 0;
  while (expr[i] && (my_search(expr[i], base) || my_search(expr[i], sym)))
    i = i + 1;
  if (expr[i])
    return (1);
  else
    return (0);
}

int	check_error(char **arg, char *buff)
{
  if (my_strlen(buff) == 0)
    return (error_syntax(SYNTAXE_ERROR_MSG));
  if (test_expr(arg[1], arg[2], buff))
    return (error_syntax(SYNTAXE_ERROR_MSG));
  if (parse_par(buff, arg[2]))
    return (error_syntax(SYNTAXE_ERROR_MSG));
  if (my_strlen(arg[1]) == 0 || my_strlen(arg[2]) == 0)
    return (error_syntax(SYNTAXE_ERROR_MSG));
  return (0);
}
