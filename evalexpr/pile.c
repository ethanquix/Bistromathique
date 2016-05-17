/*
** pile.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:21:59 2016 Hugo Laroche
** Last update Sun Apr  3 21:40:47 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "bistromathique.h"
#include "my.h"

t_pile		*pile_add_elem(t_pile *next, t_num data)
{
  t_pile	*ret;

  ret = malloc(sizeof(t_pile));
  if (ret == NULL)
    return (NULL);
  ret->data = data;
  ret->next = next;
  return (ret);
}

t_pile		*pile_del_elem(t_pile *pile)
{
  t_pile	*ret;

  ret = pile->next;
  free(pile);
  return (ret);
}
