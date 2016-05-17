/*
** my_strcmp_int.c for bistro in /home/wyzlic_a/blih/bistro/bistro
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Tue Mar 29 17:17:54 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:48:07 2016 Hugo Laroche
*/

#include "my.h"
#include "bistromathique.h"

int	my_strcmp_int(int *a, int *b)
{
  int	i;
  int	len_a;
  int	len_b;

  len_a = my_strlen_int(a);
  len_b = my_strlen_int(b);
  i = 0;
  if (len_a > len_b)
    return (1);
  if (len_a < len_b)
    return (0);
  while (a[i] !=-1)
    {
      if (a[i] > b[i])
	return (1);
      if (b[i] > a[i])
	return (0);
      i = i + 1;
    }
  return (1);
}
