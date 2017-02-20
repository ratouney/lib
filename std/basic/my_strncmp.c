/*
** my_strlen.c for my_strlen.c in /home/ratouney/CPool_Day04
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include "stdrat_basic.h"

int my_strncmp(char *str, char *cmp, int size)
{
    int count;

    count = 0;
    if (str == NULL && cmp == NULL)
        return (-3);
    if (str == NULL || str[0] == '\0')
        return (-1);
    if (cmp == NULL || cmp[0] == '\0')
        return (-2);
    while (str[count] != '\0' && cmp[count] != '\0' && count < size)
    {
        if (str[count] == '\0' && cmp[count] != '\0')
            return (1);
        else if (str[count] == '\0' && cmp[count] != '\0')
            return (2);
        else if (str[count] > cmp[count])
            return (1);
        else if (str[count] < cmp[count])
            return (2);
        else
            count++;
    }
    return (0);
}