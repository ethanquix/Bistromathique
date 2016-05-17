/*
** my_func.c for infadd in /home/wyzlic_a/blih/Piscine_C_infinadd
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Mar 21 13:31:06 2016 Dimitri Wyzlic
** Last update Sun Apr  3 23:29:14 2016 Hugo Laroche
*/

#include <string.h>
#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	calc_retenue(int a, int b)
{
  if (a < b)
    return (1);
  else
    return (0);
}

int	*my_sub(int *a, int *b, int base, int retenue)
{
  int	*out;
  int	i;
  int	j;
  int	z;

  i = my_strlen_int(a) - 1;
  j = my_strlen_int(b) - 1;
  out = malloc((i + 3) * sizeof(int));
  z = 0;
  while (i >= 0)
    {
      out[z] = (j < 0) ? a[i] - retenue : a[i] - (b[j] + retenue);
      retenue = 0;
      if (out[z] < 0)
	{
	  out[z] = base + out[z];
	  retenue = 1;
	}
      j = j - 1;
      i = i - 1;
      z = z + 1;
    }
  out[z] = -1;
  return (my_evil_nbr(out));
}
