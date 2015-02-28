/*
** prototypes.h for prototypes in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Oct 10 14:33:12 2014 NGUYEN Victoria
** Last update Sat Oct 11 12:49:25 2014 NGUYEN Victoria
*/

#include "my_player.h"
#include "enemy.h"

void    my_putchar(char c);

void    my_putstr(char *str);

int	my_strcmp(char *s1, char *s2);

char	*readLine();

int     quit(char *cmd);

void	my_put_nbr(int n);

void    attack_enemy(struct s_player *player, struct s_enemy *enemy);

void    check_stat(struct s_player *player);

void    check_enemy(struct s_player *player, struct s_enemy *enemy);

void    test1(struct s_player *player, struct s_enemy *enemy, char *line);

int     test2(struct s_player *player, char *line, int *end);

void    potion_ether(struct s_player *player, char *line);
