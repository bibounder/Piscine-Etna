/*
** check_cmd.c for check_cmd in //home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete2
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Sat Oct 11 12:09:39 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:42:28 2014 NGUYEN Victoria
*/
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"

void    attack(struct s_player *player, struct s_enemy *enemy);
void	attack_slash(struct s_player *player, struct s_enemy *enemy);
void	attack_fire(struct s_player *player, struct s_enemy *enemy);
void	attack_thunder(struct s_player *player, struct s_enemy *enemy);
void    check_stat(struct s_player *player);
void    check_enemy(struct s_player *player, struct s_enemy *enemy);

void    test1(struct s_player *player, struct s_enemy *enemy, char *line)
{
  if (my_strcmp(line, "attack") == 0)
    attack(player, enemy);
  else if (my_strcmp(line, "slash") == 0)
    attack_slash(player, enemy);
  else if (my_strcmp(line, "fire") == 0)
    attack_fire(player, enemy);
  else if (my_strcmp(line, "thunder") == 0)
    attack_thunder(player, enemy);
  else if (my_strcmp(line, "libra") == 0)
    check_enemy(player, enemy);
  else if (my_strcmp(line, "heal") == 0)
    {
      player->PV = (player->PV + 25);
      player->PM = (player->PM - 3);
      my_putstr("You've just used heal. You've gained 25PV and you've lost 3 PM.\n\n");
    }
}

int     test2(struct s_player *player, char *line, int *end)
{
  if (my_strcmp(line, "stat") == 0)
    {
      check_stat(player);
      return(1);
    }
  else if (my_strcmp(line, "quit") == 0)
    {
      my_putstr("You left the game!\n");
      *end = 1;
      return(1);
    }
  return (0);
}

void    potion_ether(struct s_player *player, char *line)
{
  if (my_strcmp(line, "potion") == 0 && player->potion > 0)
    {
      player->PV = (player->PV + 30);
      player->potion = (player->potion - 1);
      my_putstr("You took a potion and gained 30PV!\nPotion stock: ");
      my_put_nbr(player->potion);
      my_putstr("\n\n");
    }
  else if (my_strcmp(line, "potion") == 0 && player->potion == 0)
    my_putstr("\e[31mYou have no potions left :( \e[0m\n\n");
  else if (my_strcmp(line, "ether") == 0 && player->ether > 0)
    {
      player->PM = (player->PM + 12);
      player->ether = (player->ether - 1);
      my_putstr("You took a ether and gained 12PM!\nEther stock: ");
      my_put_nbr(player->ether);
      my_putstr("\n\n");
    }
  else if (my_strcmp(line, "ether") == 0 && player->ether == 0)
    my_putstr("\e[31mYou have no ethers left :( \e[0m\n\n");
}
