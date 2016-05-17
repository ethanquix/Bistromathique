/*
** other_func.c for bistrp in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/evalexpr
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sun Apr  3 19:26:57 2016 Dimitri Wyzlic
** Last update Sun Apr  3 22:28:08 2016 clara girard
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

void	do_number(t_num num, t_num *ret, int *j)
{
  ret[*j] = num;
  *j = *j + 1;
}

t_num	t_num_neg()
{
  t_num	ret;
  int	*num;

  ret.type = 0;
  if ((num = malloc(2)) == NULL)
    return (t_num_null());
  num[0] = 3;
  num[1] = -1;
  ret.num = num;
  return (ret);
}

t_num	t_num_invert(t_num a)
{
  if (a.type == 1)
    a.type = -1;
  else
    a.type = 1;
  return (a);
}

int	size_without_null(t_num *tab)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (tab[i].type != 84)
    {
      if (tab[i].type != 24)
	len = len + 1;
      i = i + 1;
    }
  return (len);
}

int	find_in_str(char n, char *str)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != n)
    i = i + 1;
  if (str[i] == 0)
    return (-1);
  else
    return (i);
}
