/*
** my_strncmp.c for Pool Day06 in /home/laroch_f/Desktop/PiscineDay06/Piscine_C_J06/ex_07
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Tue Mar  8 10:54:58 2016 Hugo Laroche
** Last update Tue Mar  8 21:54:27 2016 Hugo Laroche
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	cpt;

  cpt = 0;
  while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt] && (cpt + 1) < n)
    {
      cpt = cpt + 1;
    }
  if (s1[cpt] == 0 && s2[cpt] == 0 || cpt >= n)
    return (0);
  else
    return (s1[cpt] - s2[cpt]);
}
