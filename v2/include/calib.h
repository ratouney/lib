/*
** header for stringlib in /home/ratouney/libarray
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Thu Mar 30 18:06:19 2017 
*/

#ifndef CALIB_H_
# define CALIB_H_

# define LA_SN 0
# define LA_SF 1
# define LA_BN 10
# define LA_BF 11

# define LA_WRT(x, y, z, a) calib_write(x, y, z, a)
# define LA_REM(x, y, z, a) y = calib_rem(x, z, a)
# define LA_ADD(x, y, z, a, b) y = calib_add(x, z, a, b)
# define LA_CPY(x, y) y = calib_copy(x)
# define LA_FRE(x) destroy_charray(x)
# define LA_SHW(x) calib_show(x)
# define LA_IMP(x, y) calib_import(x, y)
# define LA_EXP(x, y) calib_export(x, y)

typedef struct s_charray
{
  char **data;
  char *fill;
  int size;
}		t_charray;

void		calib_char(char c);
void		calib_nbr(int a);
char		*stp(char *,int);
char		*fillgen(int size);
char		**charray(int size);
t_charray	*newcharray(int size);
void		destroy_charray(t_charray *data);
void		calib_write(t_charray *array, char *str, int spot, int mode);
void		calib_show(t_charray *data);
t_charray      *calib_add(t_charray *data, char *str, int pos, int mode);
t_charray      *calib_rem(t_charray *data, int pos, int mode);
t_charray      *calib_copy(t_charray *data);
t_charray      *calib_import(char **data, int given);
char		**calib_export(t_charray *data, int mode);
t_charray      *calib_fromstr(char *str, char sep);
int		calib_strlen(char *str);

#endif  /* !CALIB_H_ */
