/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 13:29:00 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/27 14:13:16 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_setenv(const char *name, const char *value, int overwrite)
{
	int		i;
	char	*tmp;

	if (!name || !*name || ft_strchr(name, '='))
		return (-1);
	if (ft_getenv(name) && !overwrite)
		return (0);
	i = 0;
	ft_unsetenv(name);
	while (g_environ[i])
		i++;
	g_environ = (char **)ft_realloc((void **)&g_environ, i
		* sizeof(*g_environ), (i + 2) * sizeof(*g_environ));
	tmp = ft_strjoin(name, "=");
	g_environ[i] = ft_strjoin(tmp, value);
	ft_strdel(&tmp);
	return (0);
}
