/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:11:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:28:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsetenv(const char *name)
{
	int		i;
	size_t	len;

	if (!name || !*name || ft_strchr(name, '='))
		return (-1);
	i = 0;
	len = ft_strlen(name);
	while (g_environ[i])
	{
		if (ft_strnequ(g_environ[i], name, len) && g_environ[i][len] == '=')
		{
			ft_strdel(&g_environ[i]);
			while (g_environ[++i])
				g_environ[i - 1] = g_environ[i];
			g_environ[i - 1] = NULL;
			return (0);
		}
		i++;
	}
	return (0);
}
