/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 17:04:51 by abouvier          #+#    #+#             */
/*   Updated: 2015/12/16 15:40:14 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static char	*printf_arg(char specifier, va_list *ap)
{
	int						i;
	static const t_printf	printf[] = {
		{'d', printf_int},
		{'i', printf_int},
		{'c', printf_char},
		{'x', printf_hexa},
		{'s', printf_string},
		{0, NULL}
	};

	i = 0;
	while (printf[i].specifier)
	{
		if (printf[i].specifier == specifier)
			return (printf[i].arg(ap));
		i++;
	}
	return (NULL);
}

static int	vasprintf2(t_list **chunks, const char *format, va_list *ap)
{
	int		len;
	int		total;
	char	*chunk;

	total = 0;
	while (*format)
	{
		if (*format == '%' && *++format != '%')
		{
			if (!*format)
				break ;
			chunk = printf_arg(*format++, ap);
			len = (chunk ? ft_strlen(chunk) : 0);
		}
		else
		{
			len = (*format == '%' ? 1 : ft_strcspn(format, "%"));
			chunk = ft_strsub(format, 0, len);
			format += len;
		}
		ft_lstadd(chunks, ft_lstnew_nocopy(chunk, len + 1));
		total += len;
	}
	return (total);
}

int			ft_vasprintf(char **strp, const char *format, va_list ap)
{
	int		len;
	t_list	*chunks;
	va_list	ap_copy;

	chunks = NULL;
	__va_copy(ap_copy, ap);
	len = vasprintf2(&chunks, format, &ap_copy);
	va_end(ap_copy);
	*strp = ft_lststr(chunks);
	ft_lstdel(&chunks, ft_lstfree);
	return (len);
}
