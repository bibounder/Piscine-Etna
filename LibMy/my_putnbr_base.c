/*
** my_putnbr_base.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:01:45 2014 PAOLINI Tom
** Last update Mon Oct  6 15:02:24 2014 PAOLINI Tom
*/
int	my_putnbr_base(int nb, char *base)
{
  int	a;
  int	len;

  if (nb == -2147483648)
    return (nb);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  len = my_strlen(base);
  a = nb % len;
  nb = nb / len;
  if (nb > 0)
    my_putnbr_base(nb, base);
  my_putchar(base[a]);
  return (nb);
}
