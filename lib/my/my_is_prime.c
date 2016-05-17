/*
** my_is_prime.c for Pool Day05 in /home/laroch_f/Desktop/PiscineDay05/Piscine_C_J05
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Mon Mar  7 09:51:18 2016 Hugo Laroche
** Last update Mon Mar  7 09:59:46 2016 Hugo Laroche
*/

int	my_is_prime(int nb)
{
  int	nb_test;

  if (nb < 2)
    return (0);
  nb_test = 2;
  while ((nb % nb_test) != 0 && nb_test < (nb / 2 + 1))
      nb_test = nb_test + 1;
  if (nb_test == (nb / 2 + 1))
    return (1);
  else
    return (0);
}
