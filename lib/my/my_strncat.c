/*
** my_strncat.c for Pool Day07 in /home/laroch_f/Desktop/Piscine_C_J07/ex_03
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Wed Mar  9 17:04:57 2016 Hugo Laroche
** Last update Wed Mar  9 20:33:00 2016 Hugo Laroche
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	cpt;
  int	cpt2;

  cpt = 0;
  cpt2 = 0;
  while (dest[cpt])
    cpt = cpt + 1;
  while (src[cpt2] && cpt2 < nb)
    {
      dest[cpt + cpt2] = src[cpt2];
      cpt2 = cpt2 + 1;
    }
  dest[cpt + cpt2] = 0;
  return (dest);
}
