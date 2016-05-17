/*
** add_mult_bracket.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:07:48 2016 Hugo Laroche
** Last update Sun Apr  3 21:38:49 2016 Hugo Laroche
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	len_t_num(t_num *tab)
{
  int	i;

  i = 0;
  while (tab[i].type != 84)
    i = i + 1;
  return (i + 1);
}

int	nb_mult_to_add(t_num *tab)
{
  int	 i;
  int	nb;

  i = 0;
  nb = 0;
  while (tab[i].type != 84)
    {
      if ((tab[i].type == 1 || tab[i].type == -1) &&
	  tab[i + 1].type == 0 && tab[i + 1].num[0] == 0)
	nb = nb + 1;
      {
	i = i + 1;
      }
    }
  return (i);
}

t_num	t_num_mult()
{
  t_num	ret;
  int	*num;

  num = malloc(sizeof(int) * 2);
  if (num == NULL)
    return (t_num_error());
  ret.type = 0;
  num[0] = 4;
  num[1] = -1;
  ret.num = num;
  return (ret);
}

int	add_mult_bracket(t_num *tab)
{
  int	i;

  i = 0;
  while (tab[i].type != 84)
    {
      if ((tab[i].type == 1 || tab[i].type == -1) &&
	  tab[i + 1].type == 0 && tab[i + 1].num[0] == 0)
	return (1);
      i = i + 1;
    }
  return (0);
}
