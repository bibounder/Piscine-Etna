/*
** my_getnbr.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:00:23 2014 PAOLINI Tom
** Last update Wed Oct  8 14:03:44 2014 PAOLINI Tom
*/
int	my_getnbr(char *str)
{
  int	nb;
  int	i;
  int	negativ;

  nb = 0;
  i = 0;
  negativ = 1;
  while (str[i] > 57 || str[i] < 48)
    {
      i++;
    }
  while (str[i] <= 57 && str[i] >= 48)
    {
      nb = nb * 10 + str[i] - 48;
      if (str[i-1] == 45)
        {
          negativ = -1;
        }
      i++;
    }
  return (nb * negativ);
}
