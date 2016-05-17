/*
** my_strcat.c for Pool Day07 in /home/laroch_f/Desktop/Piscine_C_J07/ex_02
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Wed Mar  9 15:16:20 2016 Hugo Laroche
** Last update Thu Mar 10 12:30:37 2016 Hugo Laroche
*/

char	*my_strcat(char *dest, char *src)
{
  int	cpt;
  int	cpt2;

  cpt = 0;
  cpt2 = 0;
  while (dest[cpt])
    cpt = cpt + 1;
  while (src[cpt2])
    {
      dest[cpt + cpt2] = src[cpt2];
      cpt2 = cpt2 + 1;
    }
  dest[cpt + cpt2] = 0;
  return (dest);
}
