/*
** my_swap.c for  in /home/paolin_t/libmy_02/libmy_02
** 
** Made by PAOLINI Tom
** Login   <paolin_t@etna-alternance.net>
** 
** Started on  Mon Oct  6 15:08:39 2014 PAOLINI Tom
** Last update Mon Oct  6 15:08:43 2014 PAOLINI Tom
*/
void	my_swap(int *a, int *b)
{
  int	swit;

  swit = *b;
  *b = *a;
  *a = swit;
}
