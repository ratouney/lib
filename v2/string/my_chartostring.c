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

char *my_chartostring(char c)
{
    char *temp;

    if ((temp = malloc(sizeof(char) * 2)) == NULL)
        return (NULL);
    temp[0] = c;
    temp[1] = '\0';
    return (temp);
}

char *chtost(char c)
{
    return (my_chartostring(c));
}