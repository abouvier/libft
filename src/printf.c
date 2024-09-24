/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 17:04:51 by abouvier          #+#    #+#             */
/*   Updated: 2015/01/24 00:22:21 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include "libft.h"
#include <stdarg.h>

char	*printf_char(va_list *ap)
{
	return (ft_strrepeat(va_arg(*ap, int), 1));
}

char	*printf_int(va_list *ap)
{
	return (ft_itoa(va_arg(*ap, int)));
}

char	*printf_hexa(va_list *ap)
{
	return (ft_ultoa_base(va_arg(*ap, unsigned int), 16));
}

char	*printf_string(va_list *ap)
{
	char	*s;

	s = va_arg(*ap, char *);
	if (!s)
		s = "(null)";
	return (ft_strdup(s));
}
