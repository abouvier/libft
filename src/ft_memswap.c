/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:55:44 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/02 14:20:14 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_memswap(void *s1, void *s2, size_t n)
{
	unsigned char	c;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		c = *p1;
		*p1++ = *p2;
		*p2++ = c;
	}
}
