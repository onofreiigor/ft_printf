/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:47:51 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:47:58 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRINTF_H
# define __PRINTF_H

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
void				ft_select(const char *format, char **temp);
int					ft_to_string(const char *format, va_list param);
char				*ft_detect_prec(const char *format, void *data);
int					ft_create_elem(int *par, t_param *elem);
char				*ft_prec_width(const char *format, int *par);
char				*ft_concat_str(char *dest, char src);
int					ft_putnbr_l(long long n);
void				ft_print_str(const char *format, t_param *elem, va_list param);
void				ft_print_char(const char *format, t_param *elem, va_list param);
void				ft_hexa_format(const char *format, t_param *elem, va_list param);
uintmax_t			ft_hexa_data(const char *format, t_param *elem, va_list param);
void				ft_int_decimal(const char *format, t_param *elem, va_list param);
intmax_t			ft_data(const char *format, t_param *elem, va_list param);
void				*ft_create_set(int c, size_t n);
void				ft_width(const char *format, t_param *e, int w);
int					ft_print(int *par, t_param *e);

#endif
