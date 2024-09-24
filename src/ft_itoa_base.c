/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:11:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:28:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_itoa_base(int n, int base)
{
	int					m;
	char				*a;
	size_t				len;
	static const char	s[] = "0123456789abcdefghijklmnopqrstuvwxyz";

	if (base < 2 || base > 36)
		return (NULL);
	m = n;
	len = ft_nbrlen_base(n, base);
	a = ft_strnew(len);
	if (a)
	{
		while (len--)
		{
			a[len] = s[ft_abs(n % base)];
			n /= base;
		}
		if (m < 0)
			a[0] = '-';
	}
	return (a);
}
