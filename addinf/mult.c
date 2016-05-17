/*
** mult.c for mult in /home/wyzlic_a/blih/bistro/mult
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Tue Mar 22 18:37:03 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:48:25 2016 Hugo Laroche
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "bistromathique.h"

int	fill_out_mult(int **out, int zeros, int to_malloc)
{
  int	z;

  z = 0;
  *out = malloc(to_malloc * sizeof(int));
  while (z < zeros)
    {
      out[0][z] = 0;
      z = z + 1;
    }
  return (z);
}

int	calc_retenue_mult(int **out, int z, int retenue, int base)
{
  while (out[0][z] >= base)
    {
      out[0][z] = out[0][z] - base;
      retenue = retenue + 1;
    }
  return (retenue);
}

int	*sec_mult(int *a, int b, int zeros, int base)
{
  int	i;
  int	*out;
  int	z;
  int	retenue;

  retenue = 0;
  i = my_strlen_int(a) - 1;
  z = fill_out_mult(&out, zeros, (i + zeros + 3));
  while (i >= 0)
    {
      out[z] = ((b * a[i]) + retenue);
      retenue = 0;
      retenue = calc_retenue_mult(&out, z, retenue, base);
      z = z + 1;
      i = i - 1;
    }
  if (retenue > 0)
    {
      out[z] = retenue;
      z = z + 1;
    }
  out[z] = -1;
  return (my_evil_nbr(out));
}

int	*my_mult(int *a, int *b, int base)
{
  int	i;
  int	z;
  int	*final;
  int	len_b;
  int	len_a;

  len_a = my_strlen_int(a);
  len_b = my_strlen_int(b);
  final = malloc((len_a + len_b + 1) * sizeof(int));
  final[0] = 0;
  final[1] = -1;
  z = 0;
  i = len_b - 1;
  while (i >= 0)
    {
      final = my_add(sec_mult(a, b[i], z, base), final, base, 0);
      i = i - 1;
      z = z + 1;
    }
  return (final);
}
