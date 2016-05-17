/*
** my_str_isupper.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_14
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 18:50:27 2016 Hugo Laroche
** Last update Tue Mar  8 22:00:40 2016 Hugo Laroche
*/

int	my_str_isupper(char *str)
{
  int	quit;
  int	cpt;

  quit = 0;
  cpt = 0;
  while (str[cpt] >= 'A' && str[cpt] <= 'Z')
    {
      cpt = cpt + 1;
    }
  if (str[cpt] == '\0')
    return (1);
  else
    return (0);
}
