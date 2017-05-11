/*
** my_malloc.c for lib in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Wed Apr 26 20:54:18 2017 Jean Pignouf
** Last update Wed May 10 21:44:11 2017 
*/

#include <stdlib.h>
#include <unistd.h>
#include "ratlib.h"
#include "malloc.h"

int my_malloc_st(t_tag *tag_list, char *tag)
{
  t_tag *temp;

  if (tag_list == NULL)
    return (-1);
  temp = tag_list;
  while (temp)
  {
    if (my_strcmp(temp->name, tag) == 0)
      return (1);
    temp = temp->next;
  }
  return (0);
}

static void *my_malloc_get(t_mal *mal_list)
{
  t_mal *mal;

  mal = mal_list;
  while (mal->next)
    mal = mal->next;
  return (mal->space);
}

static void *my_malloc_mainloop(t_tag **given, char *tag)
{
  t_tag *tag_list;
  t_tag *temp;

  tag_list = (*given);
  temp = tag_list;
  while (my_strcmp(temp->name, tag) != 0)
    temp = temp->next;
  return (my_malloc_get(temp->mal_list));
}

static void *my_malloc_preloop(t_tag **tag_list, char *tag, int size)
{
  t_tag *temp;

  temp = (*tag_list);
  while (my_strcmp(temp->name, tag) != 0)
    temp = temp->next;
  if (temp->mal_list == NULL)
    temp->mal_list = init_malloc_list(size, tag);
  else
    add_to_malloc_list(temp->mal_list, size, tag);
  return (my_malloc_mainloop(tag_list, tag));
}

void *my_malloc(char *tag, int size)
{
  static t_tag *tag_list = NULL;
  int rt;

  if (size > 0)
  {
    rt = my_malloc_st(tag_list, tag);
    if (rt == -1)
      tag_list = my_malloc_tag_list_init(tag);
    else if (rt == 0)
      add_tag(tag_list, tag);
    return (my_malloc_preloop(&tag_list, tag, size));
  }
  if (size == -1)
    return (my_malloc_free(tag_list, tag));
  if (size == -2)
    return (tag_list = my_malloc_freelist(tag_list));
  if (size == -3)
    return (&tag_list);
  return (NULL);
}
