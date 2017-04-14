/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:52:57 by okosiako          #+#    #+#             */
/*   Updated: 2017/02/21 16:54:10 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# define CONV "duoxsScCp%DUOXi"

typedef struct		s_param
{
	void			*data;
	char			*width;
	char			*prec;
	char			*sign;
	char			*flag;
	int				res;
	char			type;
}					t_param;

int					ft_printf(const char *restrict format, ...);
void				ft_choose(const char *format, char **temp);
int					ft_conv(const char *format, va_list param);
char				*ft_precis(const char *format, void *data);
int					ft_make_elem(int *par, t_param *elem);
char				*ft_wp(const char *format, int *par);
char				*ft_addstr(char *dest, char src);
int					ft_putnbr_l(long long n);
void				ft_s(const char *format, t_param *elem, va_list param);
void				ft_c(const char *format, t_param *elem, va_list param);
void				ft_xopu(const char *format, t_param *elem, va_list param);
uintmax_t			ft_data_x(const char *format, t_param *elem, va_list param);
void				ft_di(const char *format, t_param *elem, va_list param);
intmax_t			ft_data(const char *format, t_param *elem, va_list param);
void				*ft_create_set(int c, size_t n);
void				ft_width(const char *format, t_param *e, int w);
int					ft_print(int *par, t_param *e);

#endif
