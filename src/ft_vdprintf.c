/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 17:04:51 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/20 14:10:14 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	print_char(int fd, va_list *ap)
{
	char	c;

	c = (char)va_arg(*ap, int);
	ft_putchar_fd(c, fd);
	return (1);
}

static int	print_int(int fd, va_list *ap)
{
	char	*s;
	int		len;

	if ((s = ft_itoa(va_arg(*ap, int))))
	{
		ft_putstr_fd(s, fd);
		len = ft_strlen(s);
		ft_strdel(&s);
		return (len);
	}
	else
		return (0);
}

static int	print_string(int fd, va_list *ap)
{
	char	*s;

	if (!(s = va_arg(*ap, char *)))
		s = "(null)";
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}

t_print		g_print[] =
{
	{'d', &print_int},
	{'i', &print_int},
	{'c', &print_char},
	{'s', &print_string},
	{0, NULL}
};

static int	print(int fd, char format, va_list *ap)
{
	int	i;

	i = 0;
	while (g_print[i].print)
	{
		if (g_print[i].format == format)
			return ((*g_print[i].print)(fd, ap));
		i++;
	}
	return (0);
}

int			ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%' && *++format != '%')
			len += print(fd, *format, &ap);
		else
			len += write(fd, format, 1);
		format++;
	}
	return (len);
}
