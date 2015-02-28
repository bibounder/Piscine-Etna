/*
** my_putchar.c for my_putchar in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 11:17:59 2014 NGUYEN Victoria
** Last update Fri Oct 10 11:18:08 2014 NGUYEN Victoria
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
