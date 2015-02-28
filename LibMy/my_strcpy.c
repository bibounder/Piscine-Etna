/*
** my_strcpy.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:05:59 2014 PAOLINI Tom
** Last update Mon Oct  6 15:06:01 2014 PAOLINI Tom
*/
char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while(src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
