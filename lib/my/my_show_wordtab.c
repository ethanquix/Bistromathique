/*
** my_show_wordtab.c for Pool Day08 in /home/laroch_f/Desktop/Piscine_C_J08/ex_03
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Thu Mar 10 14:56:01 2016 Hugo Laroche
** Last update Thu Mar 10 15:07:29 2016 Hugo Laroche
*/

int	my_show_wordtab(char **tab)
{
  int	cpt;

  cpt = 0;
  while (tab[cpt])
    {
      my_putstr(tab[cpt]);
      my_putchar('\n');
      cpt = cpt + 1;
    }
  return (0);
}
