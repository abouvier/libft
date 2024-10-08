/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:11:09 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:13:54 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_pathjoin(const char *p1, const char *p2)
{
	size_t	len;
	char	*join;

	len = ft_strlen(p1);
	join = ft_strdup(p1);
	if (join)
	{
		while (len-- && join[len] == '/')
			join[len] = '\0';
		p1 = ft_strjoin(join, "/");
		ft_strdel(&join);
		if (p1)
			join = ft_strjoin(p1, p2);
		ft_strdel((char **)&p1);
	}
	return (join);
}
