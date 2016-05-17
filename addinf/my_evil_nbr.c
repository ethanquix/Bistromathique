/*
** my_evil_nbr.c for Bistro in /home/laroch_f/SALUT
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Fri Mar 25 19:05:35 2016 Hugo Laroche
** Last update Sun Apr  3 21:48:34 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	*my_evil_nbr(int *src)
{
  int	*dst;
  int	len_src;
  int	i;

  len_src = my_strlen_int(src);
  dst = malloc((len_src + 1) * sizeof(int));
  if (dst == NULL)
    return (NULL);
  i = 0;
  while (i < len_src)
    {
      dst[i] = src[len_src - 1 - i];
      i = i + 1;
    }
  dst[i] = -1;
  return (dst);
}
