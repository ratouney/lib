/*
** headergen.c for CPE_2016_BSQ_bootstrap in /home/ratouney/CPE_2016_BSQ_bootstrap
**
** Made by ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Sun Dec 11 09:59:08 2016 ratouney
** Last update Sun Dec 11 11:45:49 2016 John Doe
*/

#include "rtlib.h"

void    my_putstr(char *str)
{
    int count;

    count = -1;
    while (str[++count] != '\0')
        my_putchar(str[count]);
}