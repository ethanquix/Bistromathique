/*
** my_putstr.c for Pool Day04 in /home/laroch_f/Desktop/Piscine/Piscine_C_J04
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Thu Mar  3 11:16:18 2016 Hugo Laroche
** Last update Thu Mar  3 14:28:11 2016 Hugo Laroche
*/

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
