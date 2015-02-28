/*
** my_strcmp.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:05:26 2014 PAOLINI Tom
** Last update Mon Oct  6 15:05:44 2014 PAOLINI Tom
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;
  for (i = 0; s1[i] != '\0' || s2[i] != '\0'; ++i)
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      else
	{
          if (s1[i] == '\0' && s2[i] == '\0')
	    return (0);
	}
    }
}
