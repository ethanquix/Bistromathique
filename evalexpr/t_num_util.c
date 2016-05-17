/*
** t_num_util.c for bistro in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/evalexpr
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sun Apr  3 20:18:40 2016 Dimitri Wyzlic
** Last update	Sun Apr 03 20:18:54 2016 Full Name
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

t_num	t_num_error()
{
  t_num	ret;

  ret.type = 42;
  return (ret);
}

t_num	t_num_end()
{
  t_num	ret;

  ret.type = 84;
  return (ret);
}

t_num	t_num_null()
{
  t_num	ret;

  ret.type = 24;
  return (ret);
}
