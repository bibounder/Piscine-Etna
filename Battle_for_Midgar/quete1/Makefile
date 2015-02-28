##
## Makefile for Makefile in /home/nguyen_v/Piscine/Battle For Midgard/nguyen_v/quete1
## 
## Made by NGUYEN Victoria
## Login   <nguyen_v@etna-alternance.net>
## 
## Started on  Fri Oct 10 11:18:45 2014 NGUYEN Victoria
## Last update Fri Oct 10 21:50:07 2014 NGUYEN Victoria
##

CC 	= gcc

NAME 	= ragnarok

SRC 	= my_putchar.c 		\
	  my_putstr.c 		\
	  my_strcmp.c		\
	  readline.c		\
	  attack_enemy.c	\
	  attack_player.c	\
	  my_put_nbr.c		\
	  check_state.c		\
	  start.c		\
	  main.c

OBJ 	= $(SRC:%.c=%.o)

CFLAGS	= -W -Wall -Werror

RM 	= rm -f

$(NAME):		$(OBJ)
			$(CC) $(OBJ) -o $(NAME)
all:			$(NAME)

clean:
			$(RM)	$(OBJ)

fclean:			clean
			$(RM)	$(NAME)

re:			fclean all