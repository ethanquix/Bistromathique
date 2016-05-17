/*
** main.c for infiadd in /home/wyzlic_a/blih/Piscine_C_infinadd
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Mar 21 13:24:58 2016 Dimitri Wyzlic
** Last update Sun Apr  3 21:48:16 2016 Hugo Laroche
*/

#include "my.h"
#include "bistromathique.h"

t_num	next_main__add_two(t_num a, t_num b, int base, t_num out)
{
  if (a.type == -1 && b.type == -1)
    {
      out.type = -1;
      out.num = my_add(b.num, a.num, base, 0);
      return (out);
    }
  if (b.type == -1)
    {
      out.type = -1;
      out.num = my_sub(b.num, a.num, base, 0);
      return (out);
    }
  out.type = 1;
  out.num = my_sub(b.num, a.num, base, 0);
  return (out);
}

t_num	next_main_add(t_num a, t_num b, int base, t_num out)
{
  if (my_strcmp_int(a.num, b.num) == 1)
    {
      if (a.type == -1 && b.type == -1)
	{
	  out.type = -1;
	  out.num = my_add(a.num, b.num, base, 0);
	  return (out);
	}
      else if (a.type == -1)
	{
	  out.type = -1;
	  out.num = my_sub(a.num, b.num, base, 0);
	  return (out);
	}
      out.type = 1;
      out.num = my_sub(a.num, b.num, base, 0);
      return (out);
    }
  else
    return (next_main__add_two(a, b, base, out));
}

t_num	main_add(t_num a, t_num b, int base)
{
  t_num	out;

  if (a.type == 1 && b.type == 1)
    {
      if (my_strlen_int(a.num) >= my_strlen_int(b.num))
	{
	  out.num = my_add(a.num, b.num, base, 0);
	  out.type = 1;
	}
      else
	{
	  out.num = my_add(b.num, a.num, base, 0);
	  out.type = 1;
	}
      return (out);
    }
  return (next_main_add(a, b, base, out));
}
