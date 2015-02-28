/*
** my_str_to_wordtab.c for  in /home/paolin_t/Jour07/my_str_to_wordtab
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Wed Oct  8 10:43:08 2014 PAOLINI Tom
** Last update Wed Oct  8 16:04:18 2014 PAOLINI Tom
*/

#include <stdlib.h>

int	count_word(char *str)
{
  int	i;
  int	nm;


  i = 0;
  nm = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= 'a' && str[i] <= 'z'))
	{
	  while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
		 || (str[i] >= 'a' && str[i] <= 'z'))
	    ++i;
	  ++nm;
	}
      ++i;
    }
  return (nm);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nm;
  int	i;
  int	k;

  i = 0;
  k = 0;
  nm = count_word(str);
  tab = malloc(sizeof(char *) * nm + 1);
  while (str[i] != '\0')
    {
      while (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
	       || (str[i] >= 'a' && str[i] <= 'z')))
	++i;
      tab[k] = &str[i];
      while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
	     || (str[i] >= 'a' && str[i] <= 'z'))
	++i;
      str[i] = '\0';
      ++i;
      ++k;
    }
  tab[k] = '\0';
  return (tab);
}
