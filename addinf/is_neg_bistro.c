/*
** is_neg_bistro.c for bistro in /home/wyzlic_a/blih/bistro/mult
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Thu Mar 24 01:38:35 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:47:37 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	is_neg_bistro(char *c)
{
  int	i;

  i = 0;
  while (c[i])
    {
      if (c[i] == '-')
	return (1);
      if (c[i] >= '0' && c[i] <= '9')
	return (0);
      i = i + 1;
    }
  return (0);
}

char	*put_neg(char *c)
{
  int	i;
  char	*out;

  out = malloc(my_strlen(c));
  i = 0;
  out[0] = '-';
  while (c[i])
    {
      out[i + 1] = c[i];
      i = i + 1;
    }
  return (out);
}
