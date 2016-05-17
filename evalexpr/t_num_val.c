/*
** t_num_val.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:23:44 2016 Hugo Laroche
** Last update Sun Apr  3 21:40:57 2016 Hugo Laroche
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

t_num	t_num_zero()
{
  t_num	ret;
  int	*num;

  ret.type = 1;
  num = malloc(sizeof(int) * 2);
  if (num == NULL)
    return (t_num_error());
  num[0] = 0;
  num[1] = -1;
  ret.num = num;
  return (ret);
}

void	t_num_print(t_num a, char *str)
{
  int	i;
  int	check;

  check = 0;
  i = 0;
  if (is_equal_zero(a))
    my_putchar(str[0]);
  else
    {
      if (a.type == -1)
	my_putchar('-');
      while (a.num[i] != -1)
	{
	  if (a.num[i] != 0)
	    check = 1;
	  if (check == 1)
	    my_putchar(str[a.num[i]]);
	  i = i + 1;
	}
    }
}

t_num	t_num_signal()
{
  t_num	ret;

  ret.type = 97;
  return (ret);
}
