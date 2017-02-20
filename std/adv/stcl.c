/*
** my_strlen.c for my_strlen.c in /home/ratouney/CPool_Day04
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include "stdrat_adv.h"

char *stcl(char *str, int from, int to, int mode)
{
    int count;
    int min;
    int max;
    char *new;

    if (to <= from && to != 0)
        return (NULL);
    min = (from >= 0 ? from : 0);
    if (to == 0)
        max = my_strlen(str);
    else
        max = (to <= my_strlen(str) ? to : my_strlen(str));
    new = malloc(sizeof(char) * (max - min + 2));
    count = -1;
    while (++count + min < max)
        new[count] = str[count + min];
    new[count] = '\0';
    if (mode == 1)
        free(str);
    return (new);
}