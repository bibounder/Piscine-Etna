##
## Makefile for Makefile in /home/paolin_t/libmy_02
## 
## Made by PAOLINI Tom
## Login   <paolin_t@etna-alternance.net>
## 
## Started on  Sat Oct  4 18:49:22 2014 PAOLINI Tom
## Last update Wed Oct  8 16:09:09 2014 PAOLINI Tom
##
CC	= gcc -c

NAME	= libmy.a

SRC	= my_putchar.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_getnbr.c \
	  my_aff_tab.c \
	  my_strcpy.c \
	  my_strncpy.c \
	  my_strcmp.c \
	  my_strncmp.c \
	  my_strcat.c \
	  my_strncat.c \
	  my_strstr.c \
	  my_putnbr_base.c \
	  my_strdup.c \
	  my_str_to_wordtab.c

OBJ	= $(SRC:%.c=%.o)

RM	= rm -f 

RANLIB 	= ranlib

AR	= ar rc

$(NAME):	$(OBJ)
		$(CC) $(SRC)
		$(AR) $(NAME) $(OBJ)
		$(RANLIB) $(NAME)

all:		$(NAME)

clean:		
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all