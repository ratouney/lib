/*
** loadfile.h for loadfile in /home/ratouney/lib/file
** 
** Made by 
** Login   <ratouney>
** 
** Started on  Mon Apr  3 14:08:58 2017 
** Last update Mon Apr  3 14:09:29 2017 
*/

#ifndef LOADFILE_H_
# define LOADFILE_H_

typedef struct s_content
{
    char *raw;
    char **line;

    int errno;
    int errno_mod;
    int fd;
    int size;
} t_content;

void loadfile_destroy(t_content *data);
void loadfile_show(t_content *data);
void loadfile_showerr(t_content *data);
int loadfile_sep(char *str, char c);
int main(int argc, char **argv);
t_content *loadfile_line_prep(t_content *info);
t_content *loadfile_line(t_content *info);
t_content *loadfile(char *path);
char *loadfile_raw(int fd);

#endif /* !LOADFILE_H_ */

