/*
** my_strcapitalize.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_10
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 15:24:07 2016 Hugo Laroche
** Last update Tue Mar  8 21:57:51 2016 Hugo Laroche
*/

char	*my_strcapitalize(char *str)
{
  int	cpt;
  int	mot;

  mot = 1;
  cpt = 0;
  while (str[cpt])
    {
      if (mot == 1 && str[cpt] >= 'a' && str[cpt] <= 'z')
	{
	  str[cpt] = str[cpt] - 32;
	  mot = 0;
	}
      else if (str[cpt] >= '0' && str[cpt] <= '9')
	mot = 0;
      else if (str[cpt] == '-' || str[cpt] == '+')
	mot = 1;
      else if (str[cpt] == ' ' || (str[cpt] >= 'A' && str[cpt] <= 'Z'))
	mot = 1;
      cpt = cpt + 1;
    }
  return (str);
}
