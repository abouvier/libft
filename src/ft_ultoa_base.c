/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:11:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:28:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ulnbrlen_base(unsigned long n, int base)
{
	size_t	len;

	if (base < 2 || base > 36)
		return (0);
	len = 1;
	while (n >= (unsigned)base)
	{
		n /= base;
		len++;
	}
	return (len);
}

char			*ft_ultoa_base(unsigned long n, int base)
{
	char		*a;
	size_t		len;
	static char	s[] = "0123456789abcdefghijklmnopqrstuvwxyz";

	if (base < 2 || base > 36)
		return (NULL);
	len = ft_ulnbrlen_base(n, base);
	if ((a = ft_strnew(len)))
	{
		while (len--)
		{
			a[len] = s[n % base];
			n /= base;
		}
	}
	return (a);
}
