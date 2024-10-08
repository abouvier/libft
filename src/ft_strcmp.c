/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:00:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:03:13 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
		return (-1);
	return (1);
}
