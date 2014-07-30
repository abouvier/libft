/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:39:07 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/19 17:25:50 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (s1 > s2)
		ft_memcpy(s1, s2, n);
	else if (s1 != s2)
	{
		while (n--)
			*p1++ = *p2++;
	}
	return (s1);
}
