/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Sep 09 11:42:69 2016 Chuck Norris
*/ 

#ifndef STDRAT_BASIC_H_
# define STDRAT_BASIC_H_

# include <unistd.h>

int fdinstr(char, char *);
int my_get_nbr(char *);
int my_nbrlen(int a);
void my_put_nbr(int);
void my_putchar(char);
void my_putchars(char, int);
void my_putstr(char *);
int my_strcmp(char *, char *);
int my_strlen(char *);
int my_strncmp(char *, char *, int);

#endif /* !STDRAT_BASIC_H_ */