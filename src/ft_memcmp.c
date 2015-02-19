/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:38:13 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/19 17:56:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (!n)
		return (0);
	p1 = s1;
	p2 = s2;
	while (--n && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
