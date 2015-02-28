/*
** my_strncat.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:07:34 2014 PAOLINI Tom
** Last update Mon Oct  6 15:07:43 2014 PAOLINI Tom
*/
char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	l;

  l = my_strlen(str1);
  for (i = 0; i < n; i++)
    {
      str1[l] = str2[i];
      ++l;
    }
  str1[l] = '\0';
  return (str1);
}
