/*
** my_square_root.c for Pool Day05 in /home/laroch_f/Desktop/PiscineDay05/Piscine_C_J05
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Mon Mar  7 09:37:56 2016 Hugo Laroche
** Last update Mon Mar  7 09:50:44 2016 Hugo Laroche
*/

int	my_square_root(int nb)
{
  int	nb_test;

  while ((nb_test * nb_test) < nb)
    nb_test = nb_test + 1;
  if ((nb_test * nb_test) == nb)
    return (nb_test);
  else
    return (0);
}
