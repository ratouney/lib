/*
** my_strlen.c for my_strlen.c in /home/ratouney/CPool_Day04
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include <stdlib.h>

char *fusemod(char *src, char *add, char c, int mode)
{
    int count;
    int cunt;
    char *new;

    new = malloc(sizeof(char) * (my_strlen(src) +
    my_strlen(add) + 1 + (c >= 0 ? 1 : 0)));
    count = -1;
    while (src[++count] != '\0')
        new[count] = src[count];
    if (c >= 0)
    {
        new[count] = c;
        count++;
    }
    cunt = -1;
    while (add[++cunt] != '\0')
        new[cunt + count] = add[cunt];
    new[cunt + count] = '\0';
    if (mode == 1 || mode == 3)
        free(src);
    if (mode == 2 || mode == 3)
        free(add);
    return (new);
}