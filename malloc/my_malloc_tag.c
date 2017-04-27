/*
** my_malloc_tag.c for malloc in /home/ratouney/lib/malloc
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Thu Apr 27 15:34:41 2017 Jean Pignouf
** Last update Thu Apr 27 15:55:46 2017 
*/

#include <stdlib.h>
#include "malloc.h"
#include "ratlib.h"

t_tag		*my_malloc_tag_list_init(char *str)
{
  t_tag		*tag_list;

  if ((tag_list = malloc(sizeof(t_tag))) == NULL)
    return (NULL);
  tag_list->name = stcl(str, 0, 0, 0);
  tag_list->mal_list = NULL;
  tag_list->next = NULL;
  return (tag_list);
}

void		add_tag(t_tag *tag_list, char *str)
{
  t_tag		*temp;
  t_tag		*new;

  temp = tag_list;
  while (temp->next)
    temp = temp->next;
  if ((new = malloc(sizeof(t_tag))) == NULL)
    return ;
  new->name = stcl(str, 0, 0, 0);
  new->mal_list = NULL;
  new->next = NULL;
  temp->next = new;
}

t_mal		*init_malloc_list(int size, char *tag)
{
  t_mal		*mal_list;

  if ((mal_list = malloc(sizeof(t_mal))) == NULL)
    return (NULL);
  if ((mal_list->space = malloc(size)) == NULL)
    return (NULL);
  mal_list->size = size;
  mal_list->tag = stcl(tag, 0, 0, 0);
  mal_list->next = NULL;
  return (mal_list);
}

void		add_to_malloc_list(t_mal *mal_list, int size, char *tag)
{
  t_mal		*temp;
  t_mal		*new;

  temp = mal_list;
  while (temp->next)
    temp = temp->next;
  if ((new = malloc(sizeof(t_mal))) == NULL)
    return ;
  new->space = malloc(size);
  new->size = size;
  new->tag = stcl(tag, 0, 0, 0);
  new->next = NULL;
  temp->next = new;
}

void		*add_to_tag(t_tag *tag_list, char *tag, int size)
{
  t_tag		*temp;

  temp = tag_list;
  while (my_strcmp(temp->name, tag) != 0)
    temp = temp->next;
  if (temp == NULL)
    return (NULL);
  if (temp->mal_list == NULL)
    temp->mal_list = init_malloc_list(size, tag);
  else
    add_to_malloc_list(temp->mal_list, size, tag);
  return (temp->mal_list->space);
}
