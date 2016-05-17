/*
** do_npi.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:18:34 2016 Hugo Laroche
** Last update	Sun Apr 03 19:26:24 2016 Full Name
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

void	do_close_bra(t_pile **pile, t_num *ret, int *j)
{
  while (((*pile)->data).type != 0 || ((*pile)->data).num[0] != 0)
    {
      ret[*j] = (*pile)->data;
      *pile = pile_del_elem(*pile);
      *j = *j + 1;
    }
  *pile = pile_del_elem(*pile);
}

int	val_prio(t_num op)
{
  if (op.num[0] == 2 || op.num[0] == 3)
    return (2);
  else if (op.num[0] == 4 || op.num[0] == 5 || op.num[0] == 6)
    return (1);
  else
    return (0);
}

void	do_operator(t_pile **pile, t_num *ret, int *j, t_num current)
{
  if (*pile == NULL || ((*pile)->data).num[0] < 2 ||
      val_prio(current) < val_prio((*pile)->data))
    *pile = pile_add_elem(*pile, current);
  else
    {
      while (*pile != NULL && val_prio(current) >= val_prio((*pile)->data) &&
	     ((*pile)->data.type != 0 || (*pile)->data.num[0] != 0))
	{
	  ret[*j] = (*pile)->data;
	  *j = *j + 1;
	  *pile = pile_del_elem(*pile);
	}
      *pile = pile_add_elem(*pile, current);
    }
}

void	list_to_ret(t_pile *list, t_num *ret, int *j)
{
  while (list != NULL)
    {
      ret[*j] = list->data;
      *j = *j + 1;
      list = list->next;
    }
}

t_num		*do_npi(t_num *tab)
{
  t_num		*ret;
  int		i;
  int		j;
  t_pile	*pile;

  if (!(ret = malloc(sizeof(t_num) * len_t_num(tab))))
    return (NULL);
  pile = NULL;
  i = 0;
  j = 0;
  while (tab[i].type != 84)
    {
      if (tab[i].type == 1 || tab[i].type == -1)
	do_number(tab[i], ret, &j);
      else if (tab[i].type == 0 && tab[i].num[0] == 0)
	do_operator(&pile, ret, &j, tab[i]);
      else if (tab[i].type == 0 && tab[i].num[0] == 1)
	do_close_bra(&pile, ret, &j);
      else if (tab[i].type == 0 && tab[i].num[0] > 1)
	do_operator(&pile, ret, &j, tab[i]);
      i = i + 1;
    }
  list_to_ret(pile, ret, &j);
  ret[j] = t_num_end();
  return (ret);
}
