/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:21:24 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/22 11:22:04 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrs_fd(int fd, ...)
{
	va_list	ap;
	char	*s;

	va_start(ap, fd);
	while ((s = va_arg(ap, char *)))
		ft_putstr_fd(s, fd);
	va_end(ap);
}
