/*
** my_func.c for infadd in /home/wyzlic_a/blih/Piscine_C_infinadd
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Mar 21 13:31:06 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:47:56 2016 Hugo Laroche
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "bistromathique.h"

int	my_strlen_int(int *a)
{
  int	i;

  i = 0;
  while (a[i] != -1)
    i = i + 1;
  return (i);
}

int	my_putstr_int(int *a)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen_int(a);
  while (j < i)
    {
      my_put_nbr(a[j]);
      j = j + 1;
    }
  return (0);
}

int	*end_add(int *out, int z, int retenue)
{
  if (retenue > 0)
    {
      out[z] = retenue;
      z = z + 1;
    }
  out[z] = -1;
  return (my_evil_nbr(out));
}

int	*my_add(int *a, int *b, int base, int retenue)
{
  int	*out;
  int	i;
  int	j;
  int	temp;
  int	z;

  z = 0;
  i = my_strlen_int(a) - 1;
  j = my_strlen_int(b) - 1;
  out = malloc((i + 3) * sizeof(int));
  while (i >= 0)
    {
      temp = ((j-z) < 0) ? a[i] + retenue : a[i] + b[j-z] + retenue;
      retenue = 0;
      if (temp >= base)
	     {
	       temp = temp - base;
	       retenue = 1;
	     }
      out[z] = (temp);
      i = i - 1;
      z = z + 1;
    }
  return (end_add(out, z, retenue));
}
