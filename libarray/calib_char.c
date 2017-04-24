/*
** headergen.c for calib_char in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update	Wed Apr 05 10:51:04 2017 Full Name
*/

#include <unistd.h>
#include "calib.h"

void	calib_char(char c)
{
  write(2, &c, 1);
}
