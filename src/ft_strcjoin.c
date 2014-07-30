/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:23:05 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 12:55:29 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	size_t	len;
	char	*join;

	if (!*s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1);
	if ((join = ft_strnew(len + ft_strlen(s2) + 1)))
	{
		ft_strcat(join, s1);
		join[len] = c;
		ft_strcat(join, s2);
	}
	return (join);
}
