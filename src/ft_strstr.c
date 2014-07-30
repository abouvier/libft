/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:59:08 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:59:13 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1)
	{
		if (*s1 == *s2 && !ft_strncmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
