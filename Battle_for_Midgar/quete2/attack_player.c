/*
** attack_player.c for attack_player in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 18:50:30 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:48:29 2014 NGUYEN Victoria
*/
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"

void    attack(struct s_player *player, struct s_enemy *enemy)
{
  enemy->PV = (enemy->PV - 7);
  my_putstr("Hero ");
  my_putstr(player->name);
  my_putstr(" uses attack \nMonster loses \033[31m7 PV\e[0m\n\n");
}

void	attack_slash(struct s_player *player, struct s_enemy *enemy)
{
  enemy->PV = (enemy->PV - 10);
  player->PV = (player->PV - 2);
  my_putstr("Hero ");
  my_putstr(player->name);
  my_putstr(" uses slash \nMonster loses \033[31m10 PV\e[0m\n");
  my_putstr(player->name);
  my_putstr(" loses \033[31m2 PV\e[0m\n\n");
}

void	attack_fire(struct s_player *player, struct s_enemy *enemy)
{
  enemy->PV = (enemy->PV- 10);
  player->PM = (player->PM - 3);
  my_putstr("Hero ");
  my_putstr(player->name);
  my_putstr(" uses fire \nMonster loses \033[31m10 PV\e[0m\n");
  my_putstr(player->name);
  my_putstr(" loses \033[34m3 MP\e[0m\n\n");
}

void	attack_thunder(struct s_player *player, struct s_enemy *enemy)
{
  enemy->PV = (enemy->PV- 15);
  player->PM = (player->PM - 5);
  my_putstr("Hero ");
  my_putstr(player->name);
  my_putstr(" uses thunder \nMonster loses \033[31m15 PV\e[0m\n");
  my_putstr(player->name);
  my_putstr(" loses \033[34m6 MP\e[0m\n\n");
}

void    attack_player(struct s_player *player, struct s_enemy *enemy, char *line, int *end)
{
  test1(player, enemy, line);
  potion_ether(player, line);
  if (test2(player, line, end) == 1)
      return;
  attack_enemy(player, enemy);
}
