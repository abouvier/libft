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

char	*ft_pathjoin(const char *p1, const char *p2)
{
	size_t	len;
	char	*join;

	join = ft_strdup(p1);
	len = ft_strlen(p1);
	while (len-- && join[len] == '/')
		join[len] = '\0';
	p1 = ft_strjoin(join, "/");
	ft_strdel(&join);
	join = ft_strjoin(p1, p2);
	ft_strdel((char **)&p1);
	return (join);
}
