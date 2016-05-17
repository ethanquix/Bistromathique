/*
** my_revstr.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_04
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Mon Mar  7 15:37:49 2016 Hugo Laroche
** Last update Tue Mar  8 21:16:24 2016 Hugo Laroche
*/

char	*my_revstr(char *str)
{
  int	len;
  int	cnt;
  char	swap;

  len = 0;
  while (str[len] != '\0')
    {
      len = len + 1;
    }
  len = len - 1;
  cnt = 0;
  while (cnt <= len / 2)
    {
      swap = str[cnt];
      str[cnt] = str[len - cnt];
      str[len - cnt] = swap;
      cnt = cnt + 1;
    }
  return (str);
}
