/*
** main.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:11:56 2016 Hugo Laroche
** Last update Sun Apr  3 23:21:16 2016 Hugo Laroche
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "bistromathique.h"

int	my_search(char n, char *str)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != n)
    i = i + 1;
  if (str[i])
    return (1);
  else
    return (0);
}

int	parse_par(char *str, char *sym)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  if (my_strlen(sym) < 2)
    return (0);
  while (str[i] && cpt >= 0)
    {
      if (str[i] == sym[0])
	cpt = cpt + 1;
      if (str[i] == sym[1])
	cpt = cpt - 1;
      i = i + 1;
    }
  if (cpt == 0)
    return (0);
  else
    return (1);
}

char	*get_expr(int size)
{
  char	*expr;

  if (size <= 0)
    {
      error_syntax(SYNTAXE_ERROR_MSG);
      exit(2);
    }
  expr = malloc(size + 1);
  if (expr == 0)
    {
      error_syntax(ERROR_MSG);
      exit(3);
    }
  if (read(0, expr, size) != size)
    {
      error_syntax(ERROR_MSG);
      exit(4);
    }
 expr[size] = 0;
 return (expr);
}

int	main(int nb, char **arg)
{
  t_num	*test;
  t_num	ret;
  char	*expr;
  int	size;

  if (nb != 4)
    return (error_usage(arg));
  size = my_getnbr(arg[3]);
  expr = get_expr(size);
  if (check_error(arg, expr) == 1)
    return (1);
  if (is_there_a_nbr(expr, arg[1]) == 0)
    return (error_syntax(SYNTAXE_ERROR_MSG));
  test = str_to_stru(arg, expr, 0, 0);
  if (add_mult_bracket(test) == 1)
    return (error_syntax(SYNTAXE_ERROR_MSG));
   test = do_npi(test);
   ret = do_calc(test, my_strlen(arg[1]));
  if (ret.type == 42)
    return (1);
  t_num_print(ret, arg[1]);
  free(test);
  return (0);
}
