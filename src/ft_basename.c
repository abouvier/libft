/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:47 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/09 16:21:53 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_basename(char *path)
{
	size_t	len;
	char	*name;

	if (!path || !*path)
		return (".");
	len = ft_strlen(path);
	while (len-- && path[len] == '/')
		path[len] = '\0';
	if (*path)
	{
		name = ft_strrchr(path, '/');
		if (name)
			path = name + 1;
	}
	else
		*path = '/';
	return (path);
}
