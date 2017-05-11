/*
** my_free.c for Malloc in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Thu May 11 16:47:08 2017 Jean Pignouf
** Last update Thu May 11 16:47:10 2017 
*/

#include <stdlib.h>
#include "malloc.h"

static t_tag *my_malloc_find(void *search, t_tag *list)
{
  t_mal *mal_list;
  t_tag *tag_list;

  tag_list = list;
  while (tag_list)
  {
    mal_list = tag_list->mal_list;
    while (mal_list)
    {
      if (search == mal_list->space)
        return (tag_list);
      mal_list = mal_list->next;
    }
    tag_list = tag_list->next;
  }
  return (NULL);
}

static void *my_free_link_head(t_tag **tag_list)
{
  t_mal *prev;

  prev = (*tag_list)->mal_list;
  (*tag_list)->mal_list = (*tag_list)->mal_list->next;
  free(prev->space);
  free(prev->tag);
  free(prev);
  return (NULL);
}

static void *my_free_link_switch(t_mal *prev, t_mal *malist)
{
  if (malist->next == NULL)
  {
    free(prev->next->tag);
    free(prev->next->space);
    free(prev->next);
    prev->next = NULL;
    return (NULL);
  }
  else
  {
    prev->next = malist->next;
    free(malist->space);
    free(malist->tag);
    free(malist);
    return (NULL);
  }
  return (NULL);
}

static void *my_free_link(t_tag **tag_list, void *space)
{
  t_mal *malist;
  t_mal *prev;

  malist = (*tag_list)->mal_list;
  prev = malist;
  if (prev->space == space)
    return (my_free_link_head(tag_list));
  while (malist)
  {
    if (malist->space == space)
      return (my_free_link_switch(prev, malist));
    prev = malist;
    malist = malist->next;
  }
  return (NULL);
}

void my_free(void *space)
{
  t_tag **recup;
  t_tag *tag_list;
  t_tag *temp;

  recup = my_malloc(NULL, -3);
  tag_list = (*recup);
  if ((temp = my_malloc_find(space, tag_list)) != NULL)
    my_free_link(&temp, space);
}
