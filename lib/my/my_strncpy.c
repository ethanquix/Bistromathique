/*
** my_strncpy.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Mon Mar  7 15:17:54 2016 Hugo Laroche
** Last update Tue Mar  8 21:11:23 2016 Hugo Laroche
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	cpt;

  cpt = 0;
  while (cpt < n && src[cpt])
    {
      dest[cpt] = src[cpt];
      cpt = cpt + 1;
    }
  if (n > cpt)
    dest[cpt] = '\0';
  return (dest);
}
