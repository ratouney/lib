##
## Makefile for dmfkgjldfkgjf in /home/ratouney/CPool_Day10
## 
## Made by ratouney ratouney
## Login   <ratouney@epitech.net>
## 
## Started on  Fri Oct 14 09:36:54 2016 ratouney ratouney
## Last update Fri Mar 31 15:25:44 2017 
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
		string/stcl.c			\
		libarray/calib_add.c		\
		libarray/calib_char.c		\
		libarray/calib_copy.c		\
		libarray/calib_export.c		\
		libarray/calib_fromstr.c	\
		libarray/calib_import.c		\
		libarray/calib_nbr.c		\
		libarray/calib_rem.c		\
		libarray/calib_show.c		\
		libarray/calib_write.c		\
		libarray/charray.c		\
		libarray/destroy_charray.c	\
		libarray/fillgen.c		\
		libarray/my_strpaste.c		\
		libarray/newcharray.c		\
		gnl/get_next_line.c		\
		misc/char_is.c			\
		misc/power_it.c			\
		misc/str_is.c

FULL	=	$(SRC)				\
		string/fuse_arg.c

OBJ	=	$(SRC:.c=.o)

FULLOB	=	$(FULL:.c=.o)

NAME	=	librat.a

INCLUDE = -I./include

CFLAGS += $(INCLUDE) -g -W -Wall -Wextra

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