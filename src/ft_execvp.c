/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execvp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:23:05 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/05 14:18:57 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_execvp(const char *file, char *const *argv)
{
	int		i;
	char	*path;
	char	**paths;

	if (!ft_strchr(file, '/'))
	{
		if (!(path = ft_getenv("PATH")))
			path = PATH_STDPATH;
		if (!(paths = ft_strsplit(path, ':')))
			return (-1);
		i = 0;
		path = NULL;
		while (paths[i])
		{
			if ((path = ft_pathjoin(paths[i], file)))
				execve(path, argv, g_environ);
			ft_strdel(&path);
			i++;
		}
		ft_strdeldel(&paths);
	}
	else
		execve(file, argv, g_environ);
	return (-1);
}
