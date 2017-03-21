/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:09:29 2017 
** Last update Mon Mar 20 17:09:49 2017 
*/

#include <stdlib.h>
#include "ratlib.h"

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