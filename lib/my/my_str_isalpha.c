/*
** my_str_isalpha.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_11
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 17:38:51 2016 Hugo Laroche
** Last update Tue Mar  8 21:58:39 2016 Hugo Laroche
*/

int	my_str_isalpha(char *str)
{
  int	quit;
  int	cpt;

  quit = 0;
  cpt = 0;
  while (quit == 0)
    {
      if (str[cpt] == '\0' || str[cpt] > 'z')
	  quit = 1;
      else if (str[cpt] < 'a' && str[cpt] > 'Z')
	  quit = 1;
      else if (str[cpt] < 'A')
	  quit = 1;
      cpt = cpt + 1;
    }
  if (str[cpt - 1] == '\0')
    return (1);
  else
    return (0);
}
