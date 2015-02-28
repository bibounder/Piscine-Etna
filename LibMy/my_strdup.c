/*                                                                                                                           
** my_strdup.c for  in /home/paolin_t/Jour07/my_strdup                                                                       
**                                                                                                                           
** Made by PAOLINI Tom                                                                                                       
** Login   <paolin_t@etna-alternance.net>                                                                                    
**                                                                                                                           
** Started on  Mon Oct  6 15:39:55 2014 PAOLINI Tom                                                                          
** Last update Wed Oct  8 10:38:13 2014 PAOLINI Tom
*/

#include	<stdlib.h>

char	*my_strdup(char *str)
{
  char	*tab;
  int	i;

  i = 0;
  tab = malloc(my_strlen(str) + 1);
  while (str[i] != 0)
    {
      tab[i] = str[i];
      ++i;
    }
  tab[i] = 0;
  return (tab);
}
