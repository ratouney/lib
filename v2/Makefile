##
## Makefile for dmfkgjldfkgjf in /home/ratouney/CPool_Day10
## 
## Made by ratouney ratouney
## Login   <ratouney@epitech.net>
## 
## Started on  Fri Oct 14 09:36:54 2016 ratouney ratouney
## Last update Tue Mar 28 19:06:36 2017 
##

SRC	=	string/my_putchar.c		\
		string/my_putstr.c		\
		string/my_putnbr.c		\
		string/my_strcmp.c		\
		string/my_strncmp.c		\
		string/my_strlen.c		\
		string/my_getnbr.c		\
		string/fdinstr.c		\
		string/fuse.c 			\
		string/stcl.c

FULL	=	string/my_putchar.c		\
		string/my_putstr.c		\
		string/my_putnbr.c		\
		string/my_strcmp.c		\
		string/my_strncmp.c		\
		string/my_strlen.c		\
		string/my_getnbr.c		\
		string/fdinstr.c		\
		string/fuse.c 			\
		string/stcl.c			\
		string/my_nbrtostring.c	\
		string/my_chartostring.c\
		string/fuse_arg.c

OBJ	=	$(SRC:.c=.o)

FULLOB	=	$(FULL:.c=.o)

NAME	=	librat.a

INCLUDE = -I./include

CFLAGS += $(INCLUDE) -g

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	make clean

full:		$(FULLOB)
	ar rc $(NAME) $(OBJ)
	rm -f $(FULLOB)

clean:
	rm -f $(OBJ) $(FULLOBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
