/*
** other_other_func.c for bistro in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/evalexpr
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sun Apr  3 20:06:38 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:40:01 2016 Hugo Laroche
*/

#include <stdlib.h>
#include <unistd.h>
#include "bistromathique.h"

int	len_num(char *str, char *base, int i)
{
  while (str[i] && find_in_str(str[i], base) != -1)
    i = i + 1;
  return (i);
}

void	save_result(t_num *tab, int i, t_num result)
{
  if (i >= 2)
    tab[i - 2] = t_num_null();
  if (i >= 1)
    tab[i - 1] = t_num_null();
  tab[i] = result;
}

t_num	*decal(t_num *tab)
{
  t_num	*ret;
  int	i;
  int	j;

  ret = malloc(sizeof(t_num) * (size_without_null(tab) + 1));
  if (ret == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (tab[i].type != 84)
    {
      if (tab[i].type != 24)
	{
	  ret[j] = tab[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  ret[j] = t_num_end();
  return (ret);
}

t_num	parse_sym_next(int *is_neg)
{
  if (*is_neg == 1)
    {
      *is_neg = -1;
      return (t_num_null());
    }
  else
    {
      *is_neg = 1;
      return (t_num_null());
    }
}
