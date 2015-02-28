/*
** attack_player.c for attack_player in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 18:50:30 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:29:39 2014 PAOLINI Tom
*/
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"

void	attack_enemy(struct s_player *player, struct s_enemy *enemy);

void	check_stat(struct s_player *player);

void	check_enemy(struct s_player *player, struct s_enemy *enemy);

void	attack(struct s_player *player, struct s_enemy *enemy)
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

void	attack_player(struct s_player *player, struct s_enemy *enemy, char *line, int *end)
{
  if (my_strcmp(line, "attack") == 0)
    attack(player, enemy);
  else if (my_strcmp(line, "slash") == 0)
    attack_slash(player, enemy);
  else if (my_strcmp(line, "fire") == 0)
    attack_fire(player, enemy);
  else if (my_strcmp(line, "thunder") == 0)
    attack_thunder(player, enemy);
  else if (my_strcmp(line, "stat") == 0)
    {
      check_stat(player);
      return;
    }
  else if (my_strcmp(line, "libra") == 0)
    check_enemy(player, enemy);
  else if (my_strcmp(line, "quit") == 0)
    {
      my_putstr("You left the game!\n");
      *end = 1;
      return;
    }
  attack_enemy(player, enemy);
}
