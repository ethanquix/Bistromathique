/*
** my_strcpy.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Mon Mar  7 14:51:38 2016 Hugo Laroche
** Last update Tue Mar  8 20:34:23 2016 Hugo Laroche
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
