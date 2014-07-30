/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:54:54 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:15:21 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
		p1[n] = p2[n];
	return (s1);
}
