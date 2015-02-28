/*
** my_put_nbr.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:02:35 2014 PAOLINI Tom
** Last update Mon Oct  6 15:02:56 2014 PAOLINI Tom
*/
int	my_put_nbr(int n)
{
  int	nbr;

  nbr = 0;
  if (n < 0)
    {
      my_putchar('-');
      if (n == -2147483648)
        {
          nbr = 1;
          n++;
        }
      n = n * -1;
    }
  if (n >= 10)
    my_put_nbr(n / 10);
  if (nbr == 1)
    {
      nbr = 0;
      my_putchar(n % 10 + '1');
    }
  else
    my_putchar(n % 10 + '0');
}
