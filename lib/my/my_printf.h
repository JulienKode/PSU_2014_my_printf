/*
** printf.h for  in /home/karst_j/rendu/printf/include
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Thu Nov 13 15:25:35 2014 Julien Karst
** Last update Sat Nov 15 15:01:39 2014 Julien Karst
*/

#ifndef PRINTF_H_
# define PRINTF_H_

typedef struct  s_fptr
{
  char          car;
  void          (*fptr)(va_list);
}               t_fptr;

void    my_c(va_list args);
void    my_d(va_list args);
void    my_s(va_list args);
void    my_b(va_list args);
void    my_S(va_list args);

void    my_o(va_list args);
void    my_x(va_list args);
void    my_X(va_list args);
void    my_p(va_list args);
void    my_ld(va_list args);

void    my_i(va_list args);
void    my_u(va_list args);
void    my_pour(va_list args);

extern t_fptr  my_fonct[];

#endif /* PRINTF_H_ */
