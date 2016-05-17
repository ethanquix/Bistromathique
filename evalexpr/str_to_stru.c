/*
** str_to_stru.c for bitro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:13:29 2016 Hugo Laroche
** Last update Sun Apr  3 21:39:28 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

t_num	parse_num(char *calc, char *base, int *i, int *is_neg)
{
  int	j;
  int	*num;
  t_num	ret;

  j = 0;
  if ((num = malloc(sizeof(int) * (len_num(calc, base, *i) + 1))) == NULL)
    return (t_num_null());
  while (find_in_str(calc[*i], base) != -1)
    {
      num[j] = find_in_str(calc[*i], base);
      *i = *i + 1;
      j = j + 1;
    }
  num[j] = -1;
  ret.num = num;
  if (*is_neg > -1)
    ret.type = 1;
  else
    ret.type = -1;
  *i = *i - 1;
  *is_neg = 0;
  return (ret);
}

t_num	parse_sym(char *calc, char *sym, int *i, int *is_neg)
{
  t_num	ret;
  int	*num;

  if (find_in_str(calc[*i], sym) == 3)
    {
      if (*i == 0 || (*i > 0 && find_in_str(calc[*i - 1], sym) == 0))
	return (t_num_signal());
      if (*is_neg == 0)
	*is_neg = 1;
      else if (*is_neg == 1 || *is_neg == -1)
	return (parse_sym_next(is_neg));
    }
  ret.type = 0;
  if ((num = malloc(sizeof(int) * 2)) == NULL)
    return (t_num_null());
  num[0] = find_in_str(calc[*i], sym);
  num[1] = -1;
  ret.num = num;
  return (ret);
}

t_num	parse_char(char *calc, char **arg, int *i, int *is_neg)
{
  if (find_in_str(calc[*i], arg[1]) != -1)
    return (parse_num(calc, arg[1],  i, is_neg));
  else if (find_in_str(calc[*i], arg[2]) != -1)
    return (parse_sym(calc, arg[2], i, is_neg));
  else
    return (t_num_null());
}

int	csw(char **arg, char *calc, int i)
{
  if (find_in_str(calc[i], arg[2]) != -1 ||
      find_in_str(calc[i], arg[1]) != -1)
    return (1);
  else
    return (0);
}

t_num	*str_to_stru(char **arg, char *calc, int i, int j)
{
  t_num	*tab;
  t_num	sw;
  int	isn;

  if ((tab = malloc(sizeof(t_num) * (my_strlen(calc) + 1))) == NULL)
    return (NULL);
  isn = 0;
  while (calc[i])
    {
      sw = (csw(arg, calc, i)) ? parse_char(calc, arg, &i, &isn) : t_num_null();
      if (sw.type == 97)
	{
	  tab[j] = t_num_zero();
	  tab[j + 1] = t_num_neg();
	  j = j + 2;
	}
      else if (sw.type != 24)
	{
	  tab[j] = sw;
	  j = j + 1;
	}
      i = i + 1;
    }
  tab[j] = t_num_end();
  return (tab);
}
