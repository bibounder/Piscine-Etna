/*
** my_strcat.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:03:44 2014 PAOLINI Tom
** Last update Mon Oct  6 15:04:41 2014 PAOLINI Tom
*/
char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	l;

  l = my_strlen(str1);
  for (i = 0; str2[i] != '\0'; i++)
    {
      str1[l] = str2[i];
      l++;
    }
  str1[l] = '\0';
  return (str1);
}
