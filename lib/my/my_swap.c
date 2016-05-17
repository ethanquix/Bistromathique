/*
** my_swap.c for Pool Day04 in /home/laroch_f/Desktop/Piscine/Piscine_C_J04
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Thu Mar  3 10:50:08 2016 Hugo Laroche
** Last update Fri Mar  4 12:42:34 2016 Hugo Laroche
*/

int	my_poww(int n)
{
  int	ret;

  ret = 1;
  while (n > 0)
    {
      ret = ret * 10;
      n = n - 1;
    }
  return (ret);
}

int	my_swap(int *a, int *b)
{
  int swap_a;

  swap_a = *a;
  *a = *b;
  *b = swap_a;
  return (0);
}
