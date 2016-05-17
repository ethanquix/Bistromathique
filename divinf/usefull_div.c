/*
** usefull_div.c for bistro in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/divinf
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Fri Apr  1 23:06:55 2016 Dimitri Wyzlic
** Last update Sun Apr  3 19:13:49 2016 clara girard
*/

#include <stdlib.h>
#include "my.h"

int	*set_unv(int len_a)
{
  int	*unv;

  unv = malloc(sizeof(int) * len_a);
  unv[0] = 1;
  unv[1] = -1;
  return (unv);
}

int	*set_two_two()
{
  int	*two_two;

  two_two = malloc(sizeof(int) * 2);
  two_two[0] = 2;
  two_two[1] = -1;
  return (two_two);
}
