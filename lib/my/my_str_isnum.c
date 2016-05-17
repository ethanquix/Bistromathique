/*
** my_str_isnum.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_12
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 18:13:24 2016 Hugo Laroche
** Last update Tue Mar  8 21:59:21 2016 Hugo Laroche
*/

int	my_str_isnum(char *str)
{
  int	quit;
  int	cpt;

  quit = 0;
  cpt = 0;
  while (str[cpt] >= '0' && str[cpt] <= '9')
    {
      cpt = cpt + 1;
    }
  if (str[cpt] == '\0')
    return (1);
  else
    return (0);
}
