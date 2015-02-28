/*
** my_put_nbr.c for my_put_nbr in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 20:43:12 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:32:58 2014 PAOLINI Tom
*/
#include <unistd.h>
#include "prototypes.h"

void	my_put_nbr(int n)
{
  int	d;

  d = 1;
  if (n == -2147483648)
    write(1, "-2147483648", 11);
  else
    {
      if (n < 0)
	{
	  n = - n;
	  my_putchar('-');
	}
      while (n / d >= 10)
	{
	  d = d * 10;
	}
      while (d > 0)
	{
	  my_putchar((n / d) % 10 + 48);
	  d = d / 10;
	}
    }
}
