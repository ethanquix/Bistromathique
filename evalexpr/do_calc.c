/*
** do_calc.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:07:39 2016 Hugo Laroche
** Last update Sun Apr  3 22:25:42 2016 clara girard
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	is_equal_zero(t_num in)
{
  int	i;

  i = 0;
  while (in.num[i] != -1 && in.num[i] == 0)
    i = i + 1;
  if (in.num[i] == -1)
    return (1);
  else
    return (0);
}

t_num	my_result_next(t_num *tab, t_num nb_a, t_num nb_b, int *for_norme)
{
  int	i;
  int	base;

  i = for_norme[0];
  base = for_norme[1];
  free (for_norme);
  if (tab[i].num[0] == 5)
    {
      if (is_equal_zero(nb_b))
	{
	  error_syntax(ERROR_MSG);
	  return (t_num_error());
	}
      return (main_div(nb_a, nb_b, base));
    }
  if (tab[i].num[0] == 6)
    {
      if (is_equal_zero(nb_b))
	{
	  error_syntax(ERROR_MSG);
	  return (t_num_error());
	}
      return (main_mod(nb_a, nb_b, base));
    }
  return (t_num_zero());
}

t_num	my_result(t_num *tab, int i, int base)
{
  t_num	nb_a;
  t_num	nb_b;
  int	*for_norme;

  for_norme = malloc(2 * sizeof(int));
  for_norme[0] = i;
  for_norme[1] = base;
  if (i >= 2 && tab[i - 2].type != 24)
    nb_a = tab[i - 2];
  else
    nb_a = t_num_zero();
  if (i >= 1 && tab[i - 1].type != 24)
    nb_b = tab[i - 1];
  else
    nb_b = t_num_zero();
  if (tab[i].num[0] == 2)
    return (main_add(nb_a, nb_b, base));
  if (tab[i].num[0] == 3)
    return (main_add(nb_a, t_num_invert(nb_b), base));
  if (tab[i].num[0] == 4)
    return (main_mult(nb_a, nb_b, base));
  return (my_result_next(tab, nb_a, nb_b, for_norme));
}

t_num	do_calc(t_num *tab, int base)
{
  int	i;
  t_num	ret;

  i = 0;
  while (len_t_num(tab) > 2)
    {
      i = 0;
      while (tab[i].type != 84 && tab[i].type != 0)
	i = i + 1;
      if (tab[i].type == 0)
	{
	  ret = my_result(tab, i, base);
	  if (ret.type == 42)
	    return (t_num_error());
	  save_result(tab, i, ret);
	}
      tab = decal(tab);
    }
  return (tab[0]);
}
