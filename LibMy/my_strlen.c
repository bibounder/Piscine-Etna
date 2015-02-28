/*
** my_strlen.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:06:32 2014 PAOLINI Tom
** Last update Mon Oct  6 15:06:35 2014 PAOLINI Tom
*/
int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    {
      i++;
    }
  return (i);
}
