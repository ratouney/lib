/*
** ratlib.h for ratlib.h in /home/ratouney/lib/v2/include
**
** Made by
** Login   <maxime.de-la-fouchardiere@epitech.eu>
**
** Started on  Mon Mar 20 16:28:20 2017
** Last update	Wed Apr 05 10:50:37 2017 Full Name
*/

#ifndef RATLIB_H_
# define RATLIB_H_

# ifndef UNUSED_MAC
#  define UNUSED_MAC
#  define UNUSED(x) ((void)x)
# endif /* !UNUSED_MAC */

int	my_strlen(char *str);
int	my_epurstrlen(char *);

int	my_putchar(char c);
int	my_putchar_fd(int fd, char c);

int	my_putstr(char *str);
int	my_putstr_fd(int fd, char *str);

char	*my_strdup(char *);

char	*my_strndup(char *, int);

void	my_putnbr(int nbr);
void	my_putnbr_fd(int fd, int nbr);

int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int size);

int	my_getnbr(char *str);
int	fdinstr(char tofind, char *str);

char	*stcl(char *str, int from, int to, int mode);
int	my_nbrlen(int nbr);
char	*my_chartostring(char c);
char	*chtost(char c);
char	*my_nbrtostring(int nbr);
char	*nbtoch(int nbr);
char	*fuse_arg(char *str, ...);
char	*fuse(char *str, char *add, int mode);

int	power_int(int number, int power);
float	power_float(float number, float power);
int	char_isnum(char c);
int	char_islow(char c);
int	char_isupp(char c);
int	char_isalpha(char c);
int	char_isalphanum(char c);

void	show_tab(char **tab, int fd);
void	show_array(int *tab, int size, int fd);
void	free_tab(char **tab);
int	nb_args(char **);
float	my_getfloat(char *str);

#endif /* !RATLIB_H_ */
