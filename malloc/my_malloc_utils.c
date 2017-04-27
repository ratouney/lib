/*
** my_malloc.c for lib in /home/ratouney/lib
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Wed Apr 26 20:54:18 2017 Jean Pignouf
** Last update Thu Apr 27 15:57:16 2017 
*/

#include <stdlib.h>
#include "ratlib.h"
#include "malloc.h"

void		*my_malloc_freelist(t_tag *tag_list)
{
  t_tag		*temp;
  t_tag		*prev;

  temp = tag_list;
  while (temp)
    {
      prev = temp;
      free(temp->name);
      my_malloc_freemem(temp->mal_list);
      temp = temp->next;
      free(prev);
    }
  return (NULL);
}

void		my_malloc_freemem(t_mal *list)
{
  t_mal		*temp;
  t_mal		*prev;

  if (list == NULL)
    return ;
  temp = list;
  while (temp)
    {
      prev = temp;
      free(temp->tag);
      free(temp->space);
      temp = temp->next;
      free(prev);
    }
}

void		*my_malloc_free(t_tag *tag_list, char *tag)
{
  t_tag		*tofree;
  t_mal		*maloc;

  tofree = tag_list;
  if (my_malloc_st(tag_list, tag) != 1)
    return (NULL);
  while (my_strcmp(tofree->name, tag) != 0)
    tofree = tofree->next;
  maloc = tofree->mal_list;
  my_malloc_free_list(tofree, maloc);
  return (NULL);
}

void		my_malloc_free_list(t_tag *tofree, t_mal *maloc)
{
  t_mal		*prev;

  if (maloc == NULL)
    {
      my_putstr_fd(2, "Nothing to free in [");
      my_putstr_fd(2, tofree->name);
      my_putstr_fd(2, "]\n");
    }
  else
    {
      while (maloc)
        {
	  free(maloc->space);
	  free(maloc->tag);
	  prev = maloc;
	  maloc = maloc->next;
	  free(prev);
        }
    }
  tofree->mal_list = NULL;
}
