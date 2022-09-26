/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 00:14:43 by abouvier          #+#    #+#             */
/*   Updated: 2015/02/05 02:28:04 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>

typedef struct s_printf
{
	char		specifier;
	char		*(*arg)(va_list *);
}				t_printf;

char			*printf_char(va_list *ap);
char			*printf_int(va_list *ap);
char			*printf_hexa(va_list *ap);
char			*printf_string(va_list *ap);

#endif
