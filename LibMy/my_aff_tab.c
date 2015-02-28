/*
** my_aff_tab.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:00:03 2014 PAOLINI Tom
** Last update Mon Oct  6 15:00:13 2014 PAOLINI Tom
*/
void	my_aff_tab(int tab[],int len)
{
  int	i;
  for (i = 0; i != len; i++)
    {
      my_put_nbr(tab[i]);
      my_putchar('\n');
    }
}
