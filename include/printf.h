/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/02/09 22:27:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"

typedef struct	s_print
{
	char		format;
	int			(*print)(int, va_list *);
}				t_print;

int				print_int(int fd, va_list *ap);
int				print_char(int fd, va_list *ap);
int				print_string(int fd, va_list *ap);
int				ft_printf(const char *format, ...);
int				ft_dprintf(int fd, const char *format, ...);
int				ft_vdprintf(int fd, const char *format, va_list *ap);

#endif
