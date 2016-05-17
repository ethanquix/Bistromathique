/*
** main.c for mult in /home/wyzlic_a/blih/bistro/mult
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Tue Mar 22 18:35:04 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:47:47 2016 Hugo Laroche
*/

#include "my.h"
#include "bistromathique.h"

t_num	main_mult(t_num a, t_num b, int base)
{
  int	*c;
  int	*d;
  t_num	out;

  if (my_strcmp_int(a.num, b.num) == 1)
    {
      c = a.num;
      d = b.num;
    }
  else
    {
      c = b.num;
      d = a.num;
    }
  if ((a.type == -1 && b.type == -1) || (a.type == 1 && b.type == 1))
    {
      out.type = 1;
      out.num = my_mult(c, d, base);
      return (out);
    }
  out.type = -1;
  out.num = my_mult(c, d, base);
  return (out);
}
