/*
** my_strstr.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_05
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Mon Mar  7 15:58:33 2016 Hugo Laroche
** Last update Tue Mar  8 21:18:29 2016 Hugo Laroche
*/

char	*my_strstr(char *str, char *to_find)
{
  int	cpt;
  int	len_word;

  cpt = 0;
  len_word = 0;
  while (str[cpt] && to_find[len_word])
    {
      if (str[cpt] == to_find[len_word])
	{
	  len_word = len_word + 1;
	}
      else
	{
	  cpt = cpt - len_word + 1;
	  len_word = 0;
	}
      cpt = cpt + 1;
    }
  if (to_find[len_word] == '\0')
      return (&str[cpt - len_word]);
  else
      return (0);
}
