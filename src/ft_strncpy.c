/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:55:41 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:56:10 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (*src && n)
	{
		*p++ = *src++;
		n--;
	}
	while (n--)
		*p++ = '\0';
	return (dest);
}
