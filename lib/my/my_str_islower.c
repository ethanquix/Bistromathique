/*
** my_str_islower.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_13
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 18:20:51 2016 Hugo Laroche
** Last update Tue Mar  8 22:00:13 2016 Hugo Laroche
*/

int	my_str_islower(char *str)
{
  int	quit;
  int	cpt;

  quit = 0;
  cpt = 0;
  while (str[cpt] >= 'a' && str[cpt] <= 'z')
    {
      cpt = cpt + 1;
    }
  if (str[cpt] == '\0')
    return (1);
  else
    return (0);
}
