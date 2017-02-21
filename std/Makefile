##
## Makefile for dmfkgjldfkgjf in /home/ratouney/CPool_Day10
## 
## Made by ratouney ratouney
## Login   <ratouney@epitech.net>
## 
## Started on  Fri Oct 14 09:36:54 2016 ratouney ratouney
## Last update Mon Feb 20 15:40:37 2017 ratouney
##

SRC	=	adv/fuse.c				\
		adv/fusemod.c			\
		adv/my_strpaste.c		\
		adv/stcl.c				\
		basic/fdinstr.c    \
		basic/my_get_nbr.c    \
		basic/my_nbrlen.c    \
		basic/my_putchar.c    \
		basic/my_putchars.c    \
		basic/my_put_nbr.c    \
		basic/my_putstr.c    \
		basic/my_strcmp.c    \
		basic/my_strlen.c    \
		basic/my_strncmp.c    

OBJ	=	$(SRC:.c=.o)

NAME	=	librat.a

INCLUDE = -I./include

CFLAGS += $(INCLUDE) -g -W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@make clean

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
