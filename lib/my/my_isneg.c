/*
** my_isneg.c for Pool Day03 in /home/laroch_f/Desktop/Piscine/work
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Wed Mar  2 10:42:37 2016 Hugo Laroche
** Last update Thu Mar  3 09:41:00 2016 Hugo Laroche
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
