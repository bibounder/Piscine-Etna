/*
** my_strncpy.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:08:07 2014 PAOLINI Tom
** Last update Mon Oct  6 15:08:12 2014 PAOLINI Tom
*/
char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
