/*
** my_strlen.c for Pool Day04 in /home/laroch_f/Desktop/Piscine/Piscine_C_J04
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Thu Mar  3 11:45:16 2016 Hugo Laroche
** Last update Thu Mar  3 14:30:23 2016 Hugo Laroche
*/

int	my_strlen(char *str)
{
  int	cpt;

  cpt = 0;
  while (*str != '\0')
    {
      cpt = cpt + 1;
      str = str + 1;
    }
  return (cpt);
}
