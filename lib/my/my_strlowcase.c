/*
** my_strlowcase.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_09
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 15:16:34 2016 Hugo Laroche
** Last update Tue Mar  8 21:56:08 2016 Hugo Laroche
*/

char	*my_strlowcase(char *str)
{
  int	cnt;

  cnt = 0;
  while (str[cnt])
    {
      if (str[cnt] >= 65 && str[cnt] <= 90)
        str[cnt] = str[cnt] + 32;
      cnt = cnt + 1;
    }
  return (str);
}
