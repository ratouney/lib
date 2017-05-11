/*
** malloc.h for lib in /home/ratouney/lib/include
** 
** Made by 
** Login   <ratouney >
** 
** Started on  Wed Apr 26 20:54:57 2017 Jean Pignouf
** Last update Thu May 11 17:09:54 2017 
*/

#ifndef RATLIB_MALLOC_H_
# define RATLIB_MALLOC_H_

# define MY_CLEAR() my_malloc(NULL, -2)
# define MY_FREETAG(x) my_malloc(x, -1)

typedef struct	s_mal
{
  void		*space;
  int		size;
  char		*tag;

  struct s_mal	*next;
}		t_mal;

typedef struct	s_tag
{
  char		*name;

  struct s_mal	*mal_list;
  struct s_tag	*next;
}		t_tag;

void		*my_malloc(char *tag, int size);
void		my_free(void *space);

void		*my_malloc_free(t_tag *tag_list, char *tag);
void		*my_malloc_freelist(t_tag *tag_list);
void		my_malloc_free_list(t_tag *tofree, t_mal *maloc);
void		my_malloc_freemem(t_mal *list);

t_tag		*my_malloc_tag_list_init(char *str);
t_mal		*init_malloc_list(int size, char *tag);

void		add_tag(t_tag *tag_list, char *str);
void		add_to_malloc_list(t_mal *mal_list, int size, char *tag);
int		my_malloc_st(t_tag *tag_list, char *tag);

#endif /* !RATLIB_MALLOC_H_ */
