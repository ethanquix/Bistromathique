/*
** debug.c for bistro in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique/evalexpr
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Wed Mar 30 17:15:52 2016 Hugo Laroche
** Last update	Sun Apr 03 19:30:04 2016 Full Name
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

void	print_t_num(t_num *tab)
{
  int	i;
  int	j;
  char	type;

  i = 0;
  while (tab[i].type != 84)
    {
      my_put_nbr(i);
      my_putchar(' ');
      my_putstr("Type: ");
      type = tab[i].type;
      my_put_nbr(type);
      j = 0;
      if (type != 42 && type != 84 && type != 24)
	{
	  my_putstr("     Contenu: ");
	  while (tab[i].num[j] != -1)
	    {
	      my_put_nbr(tab[i].num[j]);
	      j = j + 1;
	    }
	}
      my_putchar('\n');
      i = i + 1;
    }
}

void	putpile(t_pile *list)
{
  int	i;

  while (list != NULL)
    {
      my_putstr("Liste:  nbr-> ");
      i = 0;
      while ((list->data).num[i] != -1)
	{
	  my_put_nbr((list->data).num[i]);
	  i = i + 1;
	}
      list = list->next;
      my_putchar('\n');
    }
  my_putstr("Liste: FINI\n");
}
