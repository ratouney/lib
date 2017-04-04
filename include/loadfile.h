/*
** loadfile.h for loadfile in /home/ratouney/lib/file
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Mon Apr  3 14:08:58 2017 
** Last update Mon Apr  3 20:28:37 2017 
*/

#ifndef LOADFILE_H_
# define LOADFILE_H_

typedef struct s_content
{
    char	*raw;
    char	**line;

    int		errno;
    int		errno_mod;
    int		fd;
    int		size;
}		t_content;

void		loadfile_destroy(t_content data);
void		loadfile_show(t_content data);
void		loadfile_showerr(t_content data);
int		loadfile_sep(char *str, char c);
t_content       loadfile_line_prep(t_content info);
t_content	loadfile_line(t_content info);
t_content       loadfile(char *path);
char		*loadfile_raw(int fd);

# define LF_LOD(x) loadfile(x);
# define LF_ERR(x) loadfile_showerr(x);
# define LF_DES(x) loadfile_destroy(x);
# define LF_SHW(x) loadfile_show(x);

#endif /* !LOADFILE_H_ */

