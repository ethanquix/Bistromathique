/*
** my_strupcase.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_08
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 11:08:23 2016 Hugo Laroche
** Last update Tue Mar  8 21:55:37 2016 Hugo Laroche
*/

char	*my_strupcase(char *str)
{
  int	cnt;

  cnt = 0;
  while (str[cnt])
    {
      if (str[cnt] >= 97 && str[cnt] <= 122)
	str[cnt] = str[cnt] - 32;
      cnt = cnt + 1;
    }
  return (str);
}
