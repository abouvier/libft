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

#include "printf.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	len = ft_vdprintf(fd, format, &ap);
	va_end(ap);
	return (len);
}
