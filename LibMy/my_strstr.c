/*
** my_strstr.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 13:38:57 2014 PAOLINI Tom
** Last update Mon Oct  6 14:31:24 2014 PAOLINI Tom
*/

#include <stddef.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	y;

  i = 0;
  y = 0;
  while (str[i] != '\0');
  {
    if (str[i] == to_find[y])
      {
	y++;
      }
    else if (to_find[y] == '\0')
      {
	y = 0;
	return (&to_find[y]);
      }     
    else
      {
	y = 0;
      }
    ++i;
  }
  return NULL;
}
