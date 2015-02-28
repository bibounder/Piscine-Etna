/*
** BattleForMidgard.c for BattleForMidgard in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 10:47:30 2014 NGUYEN Victoria
** Last update Sat Oct 11 10:09:16 2014 NGUYEN Victoria
*/
#include <stdlib.h>
#include "prototypes.h"
#include "my_player.h"
#include "enemy.h"

void    attack_player(struct s_player *player, struct s_enemy *enemy, char *line, int *end);

void    attack_enemy(struct s_player *player, struct s_enemy *enemy);

void    display_help()
{
  my_putstr("\n\e[1m\e[32m\e[4mHELP: COMMANDS\e[0m\e[0m\n\n");
  my_putstr("\e[32mattack: -7PV enemy\e[0m\n");
  my_putstr("\e[32mslash: -10PV enemy, you lose 2PV\e[0m\n");
  my_putstr("\e[32mfire: -10PV enemy, you lose 3PM\e[0m\n");
  my_putstr("\e[32mthunder: -15PV enemy, you lose 5PM\e[0m\n");
  my_putstr("\e[32mstat: Display your state.\e[0m\n");
  my_putstr("\e[32mlibra: Display enemy's state. \e[0\e[4mBE CAREFUL\e[0m\e[32m you lose your turn and 1PM!\e[0m\n\n");
  my_putstr("\e[31mquit: Quit the game.\e[0m\n\n");
}

void	start(struct s_player *player, struct s_enemy *enemy, char **av, int *end)
{
  char	*cmd;

  if (my_strcmp(av[1], "-n") == 0)
    {
      player->name = av[2];
      display_help();
      my_putstr("Your turn> ");
      cmd = readLine();
      attack_player(player, enemy, cmd, end);
    }
}
