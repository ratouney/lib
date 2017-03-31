##
## Makefile for dmfkgjldfkgjf in /home/ratouney/CPool_Day10
## 
## Made by ratouney ratouney
## Login   <ratouney@epitech.net>
## 
## Started on  Fri Oct 14 09:36:54 2016 ratouney ratouney
## Last update Thu Mar 30 17:57:20 2017 
##

SRC	=	calib_add.c			\
		calib_copy.c		\
		calib_rem.c			\
		calib_show.c		\
		calib_write.c		\
		charray.c			\
		destroy_charray.c	\
		fillgen.c			\
		newcharray.c		\
		calib_char.c		\
		calib_nbr.c			\
		calib_import.c		\
		calib_export.c		\
		my_strpaste.c		\
		calib_fromstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libratarray.a

HEADER	=	calib.h

CFLAGS	+=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@make clean

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

test:
	gcc -g *.c

re:	fclean all
