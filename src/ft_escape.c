/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_escape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_escape(const char *s)
{
	int		i;
	size_t	len;
	char	*esc;

	len = ft_strlen(s) + 2;
	esc = ft_strnew(len);
	if (!esc)
		return (NULL);
	i = 1;
	*esc = '\'';
	while (*s)
	{
		if (*s == '\'')
		{
			esc = ft_realloc(&esc, len + 1, len + 4);
			ft_strcat(&esc[i], "'\\''");
			len += 3;
			i += 4;
			s++;
		}
		else
			esc[i++] = *s++;
	}
	esc[i] = '\'';
	return (esc);
}
