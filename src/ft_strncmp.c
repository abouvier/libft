/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:03:33 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:03:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			if (*(unsigned char *)s1 < *(unsigned char *)s2)
				return (-1);
			return (1);
		}
		else if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
