/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 00:14:43 by abouvier          #+#    #+#             */
/*   Updated: 2015/02/05 02:28:04 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>

typedef struct	s_print
{
	char		format;
	int			(*print)(int, va_list);
}				t_print;

static int		print_char(int fd, va_list ap);
static int		print_int(int fd, va_list ap);
static int		print_string(int fd, va_list ap);

#endif
