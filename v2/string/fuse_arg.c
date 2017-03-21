/*
** fuse_arg.c for fuse_arg in /home/ratouney/lib/v2/string
** 
** Made by 
** Login   <maxime.de-la-fouchardiere@epitech.eu>
** 
** Started on  Mon Mar 20 17:09:29 2017 
** Last update Mon Mar 20 17:09:49 2017 
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int my_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}

char *fuse(char *str, char *str1, int mode)
{
    int count;
    int cunt;
    char *new;

    new = malloc(sizeof(char) * (my_strlen(str) + my_strlen(str1) + 1));
    count = -1;
    while (++count < my_strlen(str))
        new[count] = str[count];
    cunt = -1;
    while (++cunt < my_strlen(str1))
        new[count + cunt] = str1[cunt];
    new[count + cunt] = '\0';
    if (mode == 1)
        free(str);
    else if (mode == 2)
        free(str1);
    else if (mode == 3)
    {
        free(str);
        free(str1);
    }
    return (new);
}

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

int my_nbrlen(int nbr)
{
    int count;

    count = 0;
    if (nbr < 0)
        nbr *= -1;
    while (nbr > 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}

char *my_nbrtostring(int nbr)
{
    int total;
    int count;
    int size;
    char *new;

    new = malloc(sizeof(char) * (my_nbrlen(nbr) + (nbr < 0 ? 1 : 0) + 1));
    size = my_nbrlen(nbr) + (nbr < 0 ? 1 : 0);
    new[size] = '\0';
    if (nbr < 0)
        new[0] = '-';
    count = 1;
    total = nbr * (nbr < 0 ? -1 : 1);
    while (total > 0)
    {
        new[size - count] = (total % 10) + '0';
        total /= 10;
        count++;
    }
    return (new);
}

char *my_chartostring(char c)
{
    char *temp;

    if ((temp = malloc(sizeof(char) * 2)) == NULL)
        return (NULL);
    temp[0] = c;
    temp[1] = '\0';
    return (temp);
}

char *fuse_arg(char *str, ...)
{
    va_list list;
    int count;
    char *buffer;
    char *rt;
    void *prev;

    count = 0;
    prev = NULL;
    rt = NULL;
    va_start(list, str);
    while (str[count] != '\0')
    {
        if (str[count] == 's')
        {
            prev = va_arg(list, char *);
            rt = (rt == NULL ? stcl(prev, 0, 0, 0) : fuse(rt, prev, 1));
        }
        if (str[count] == 'c')
        {
            prev = va_arg(list, int);
            buffer = my_chartostring(prev);
            rt = (rt == NULL ? stcl(buffer, 0, 0, 0) : fuse(rt, buffer, 3));
        }
        if (str[count] == 'd')
        {
            prev = va_arg(list, int);
            buffer = my_nbrtostring(prev);
            rt = (rt == NULL ? stcl(buffer, 0, 0, 0) : fuse(rt, buffer, 3));
        }
        if (str[count] == ':' && prev != NULL)
            free(prev);
        count++;
    }
    va_end(list);
    return (rt);
}

int main(int argc, char **argv)
{
    char *temp;
    char *yolo;

    yolo = malloc(sizeof(char) * 5);
    yolo[0] = ' ';
    yolo[1] = 'l';
    yolo[2] = 'e';
    yolo[3] = ' ';
    yolo[4] = '\0';
    temp = fuse_arg("sss:dcs", "J'aime", "", yolo, 42, '/', "sh");
    printf("Temp : [%s]", temp);
    free(temp);
}