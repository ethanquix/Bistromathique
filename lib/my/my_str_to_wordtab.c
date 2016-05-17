/*
** my_str_to_wordtab.c for Pool Day08 in /home/laroch_f/Desktop/Piscine_C_J08/
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Thu Mar 10 15:08:44 2016 Hugo Laroche
** Last update Thu Mar 10 20:24:34 2016 Hugo Laroche
*/

#include <stdlib.h>

int	is_alphanum(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	word_count(char *str)
{
  int	word_cnt;
  int	cpt;
  char	flag;

  cpt = 0;
  word_cnt = 0;
  flag = 0;
  while (str[cpt])
    {
      if (flag == 0 && is_alphanum(str[cpt]) == 1)
	{
	  word_cnt = word_cnt + 1;
	  flag = 1;
	}
      else if (flag == 1 && is_alphanum(str[cpt]) == 0)
	flag = 0;
      cpt = cpt + 1;
    }
  return (word_cnt);
}

void	at_first(char *str, int *pos)
{
  if (is_alphanum(str[*pos]) == 1)
    return;
  else
    {
      while (is_alphanum(str[*pos]) == 0)
	{
	  *pos = *pos + 1;
	}
    }
}

char	*extract_word(char *str, int *pos)
{
  char	*ret;
  int	len;
  int	cpt;

  cpt = *pos;
  while (is_alphanum(str[cpt]) == 1)
    cpt = cpt + 1;
  ret = malloc(cpt - *pos);
  cpt = *pos;
  while (is_alphanum(str[*pos]) == 1)
    {
      ret[*pos - cpt] = str[*pos];
      *pos = *pos + 1;
    }
  at_first(str, pos);
  return (ret);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	len;
  int	n;
  int	pos;
  char	*swap;

  len = word_count(str);
  tab = malloc(len + 1);
  n = 0;
  pos = 0;
  at_first(str, &pos);
  while (n < len)
    {
      swap = extract_word(str, &pos);
      tab[n] = malloc(my_strlen(swap));
      my_strcat(tab[n], swap);
      n = n + 1;
    }
  tab[n+1] = 0;
  return (tab);
}
