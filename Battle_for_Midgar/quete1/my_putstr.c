/*
** my_putstr.c for my_putstr in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 11:23:42 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:33:41 2014 PAOLINI Tom
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
