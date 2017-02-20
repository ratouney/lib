/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Sep 09 11:42:69 2016 Chuck Norris
*/ 

#ifndef STDRAT_ADV_H_
# define STDRAT_ADV_H_

# include <stdlib.h>
# include "stdrat_basic.h"

char *fuse(char *str, char *str1, int mode);
char *fusemod(char *src, char *add, char c, int mode);
char *load_file_in_mem(char *filepath);
char *stp(char *str, int mode);
char *stcl(char *str, int from, int to, int mode);

#endif /* !STDRAT_ADV_H_ */