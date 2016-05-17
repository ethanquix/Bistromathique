/*
** my_div.c for  in /home/girar_c/rendu/Piscine_C_bistromathique/divinf
**
** Made by clara girard
** Login   <girar_c@epitech.net>
**
** Started on  Wed Mar 30 18:48:38 2016 clara girard
** Last update Sun Apr  3 21:49:21 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	is_inf_or_equal(int *a, int *b)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (a[i] == 0)
    i = i + 1;
  while (b[j] == 0)
    j = j + 1;
  if (my_strlen_int(a) - i < my_strlen_int(b) - j)
    return (1);
  else if (my_strlen_int(a) - i > my_strlen_int(b) - j)
    return (0);
  while (a[i] != -1 && b[j] != -1)
    {
      if (a[i] < b[j])
	return (1);
      else if (a[i] > b[j])
	return (0);
      i = i + 1;
      j = j + 1;
    }
  return (1);
}

int	*my_add_div(int *a, int *b, int base, int x)
{
  if (my_strcmp_int(a, b) == 1)
    return (my_add(a, b, base, x));
  else
    return (my_add(b, a, base, x));
}

int	*next_div(int *a, int **one, int **two, int *i)
{
  int	*out;
  int	*result;
  int	len_a;
  int	*dbg;

  len_a = my_strlen_int(a);
  out = malloc((len_a + 10) * sizeof(int));
  result = malloc((len_a + 10) * sizeof(int));
  dbg = malloc((len_a + 10) * sizeof(int));
  i[0] = i[0] - 1;
  out[0] = 0;
  out[1] = -1;
  result[0] = 0;
  result[1] = -1;
  while (is_inf_or_equal(out, a) != 0 && i[0] >= 0)
    {
      dbg = my_add_div(out, two[i[0]], i[1], 0);
      if (is_inf_or_equal(dbg, a) == 1)
	{
	  out = dbg;
	  result = my_add_div(result, one[i[0]], i[1], 0);
	}
      i[0] = i[0] - 1;
    }
  return (result);
}

int	*my_div(int *a, int *b, int *i)
{
  int	**one;
  int	**two;
  int	*temp;
  int	len_a;
  int	*unv;
  int	*two_two;

  len_a = my_strlen_int(a) + 10;
  one = malloc(len_a * sizeof(int));
  two = malloc(len_a * sizeof(int));
  two_two = set_two_two();
  unv = set_unv(len_a);
  temp = b;
  while (is_inf_or_equal(temp, a) != 0)
    {
      one[i[0]] = unv;
      two[i[0]] = temp;
      unv = my_mult(unv, two_two, i[1]);
      temp = my_mult(temp, two_two, i[1]);
      i[0] = i[0] + 1;
    }
  return (next_div(a, one, two, i));
}

t_num	main_div(t_num a, t_num b, int base)
{
  t_num	ret;
  int	*i;
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
  i = malloc(2 * sizeof(int));
  i[0] = 0;
  i[1] = base;
  if ((a.type == 1 && b.type == 1) || (a.type == -1 && b.type == -1))
    ret.type = 1;
  else
    ret.type = -1;
  ret.num = my_div(a.num, b.num, i);
  return (ret);
}
