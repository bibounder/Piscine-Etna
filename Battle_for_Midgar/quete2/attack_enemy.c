/*
** attack_enemy.c for attack_enemy in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 18:48:38 2014 NGUYEN Victoria
** Last update Sat Oct 11 09:20:10 2014 NGUYEN Victoria
*/
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"
#include <stdlib.h>

void	attack_bite(struct s_player *player)
{
  player->PV = (player->PV - 6);
  my_putstr("Monster uses bite \nHero ");
  my_putstr(player->name);
  my_putstr(" loses \033[31m6 PV\e[0m \n");
}

void	attack_earthquake(struct s_player *player, struct s_enemy *enemy)
{
  player->PV = (player->PV - 15);
  enemy->PV = (enemy->PV - 3);
  my_putstr("Monster uses earthquake \nHero ");
  my_putstr(player->name);
  my_putstr(" loses \033[31m15 PV\e[0m \n");
  my_putstr("Monster loses \033[31m3 PV\e[0m\n");
}

void	attack_doom(struct s_player *player, struct s_enemy *enemy)
{
  player->PV = (player->PV - 11);
  enemy->PM = (enemy->PM - 5);
  my_putstr("Monster uses doom \nHero ");
  my_putstr(player->name);
  my_putstr(" loses \033[31m11 PV\e[0m \n");
  my_putstr("Monster loses \033[34m5 PM\e[0m\n");
}

void    attack_enemy(struct s_player *player, struct s_enemy *enemy)
{
  char  *attack_e[3];
  char  *my_choosen_cmd;

  attack_e[2] = "bite";
  attack_e[1] = "earthquake";
  attack_e[0] = "doom";
  my_choosen_cmd = attack_e[rand() % 3];
  if (my_strcmp(my_choosen_cmd, "bite") == 0)
    attack_bite(player);
  else if (my_strcmp(my_choosen_cmd, "earthquake") == 0)
    attack_earthquake(player, enemy);
  else if (my_strcmp(my_choosen_cmd, "doom") == 0)
    attack_doom(player, enemy);
}
