/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:11:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:28:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getenv(const char *name)
{
	int		i;
	size_t	len;

	if (!name || !*name || ft_strchr(name, '='))
		return (NULL);
	i = 0;
	len = ft_strlen(name);
	while (g_environ[i])
	{
		if (ft_strnequ(g_environ[i], name, len) && g_environ[i][len] == '=')
			return (&g_environ[i][len + 1]);
		i++;
	}
	return (NULL);
}
