/*
** my_mod.c for bistro in /home/wyzlic_a/final/Piscine_C_bistromathique/divinf
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Wed Mar 30 23:27:42 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:49:32 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	*my_mod(int *a, int *b, int base)
{
  int	*out;
  int	*i;

  i = malloc(2 * sizeof(int));
  i[0] = 0;
  i[1] = base;
  out = my_sub(a, my_mult(b, my_div(a, b, i), base), base, 0);
  return (out);
}

t_num	main_mod(t_num a, t_num b, int base)
{
  t_num	ret;
  int	*zero;

  zero = malloc(2 * sizeof(int));
  zero[0] = 0;
  zero[1] = -1;
  if (is_equal_zero(a) == 1)
    {
      ret.num = zero;
      ret.type = 1;
      return (ret);
    }
  if (a.type == -1)
    ret.type = -1;
  else
    ret.type = 1;
  ret.num = my_mod(a.num, b.num, base);
  return (ret);
}
