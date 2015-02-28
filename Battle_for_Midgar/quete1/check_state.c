/*
** check_state.c for check_state in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 21:46:34 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:30:26 2014 PAOLINI Tom
*/

#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"

void	check_stat(struct s_player *player)
{
  my_putstr("Your state\n|--PV:");
  my_put_nbr(player->PV);
  my_putstr("\n|--PM:");
  my_put_nbr(player->PM);
  my_putstr("\nName :");
  my_putstr(player->name);
  my_putstr("\n\n");
}

void	check_enemy(struct s_player *player, struct s_enemy *enemy)
{
  my_putstr("\033[31mEnemy's state\e[0m\n|--PV:");
  my_put_nbr(enemy->PV);
  my_putstr("\n|--PM:");
  my_put_nbr(enemy->PM);
  my_putstr("\nNom: Monster\n\n");
  player->PM = (player->PM - 1);
}
