/*
** main.c for main in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 14:38:21 2014 NGUYEN Victoria
** Last update Sat Oct 11 11:47:47 2014 NGUYEN Victoria
*/
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"
#include <stdlib.h>
#include <time.h>

void    start(struct s_player *player, struct s_enemy *enemy, char **av, int *end);

int     check(struct s_player *player, struct s_enemy *enemy)
{
  if (player->PV <= 0)
    {
      my_putstr("\e[5mYOU LOSE!!! GAME OVEEEEER\e[0m\n");
      return (1);
    }
  else if (enemy->PV <= 0)
    {
      my_putstr("\e[5mYOU WON!!! GG\e[0m\n");
      return (1);
    }
  return (0);
}

int     main(int ac, char **av)
{
  struct s_player       player;
  struct s_enemy        enemy;
  int			end;

  srand(time(NULL));
  if (ac < 2 || my_strcmp(av[1], "-n") != 0)
    my_putstr("\033[31mUSAGE: <-n> <Player name>\e[0m\n");
  else if (ac == 3)
    {
      enemy.PV = 75;
      enemy.PM = 20;
      player.PV = 100;
      player.PM = 30;
      player.potion = 5;
      player.ether = 5;
      end = 0;
      while (check(&player, &enemy) == 0 && end == 0)
        {
          start(&player, &enemy, av, &end);
          my_putchar('\n');
        }
    }
  return (0);
}
