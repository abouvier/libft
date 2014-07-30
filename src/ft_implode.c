/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_implode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:23:05 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 12:55:29 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_implode(char *const *argv, char c)
{
	char	*implode;
	char	*tmp;

	if (!*argv)
		return (ft_strnew(0));
	implode = ft_strdup(*argv);
	while (*++argv)
	{
		tmp = ft_stradd(implode, c);
		ft_strdel(&implode);
		if (!tmp)
			return (NULL);
		implode = ft_strjoin(tmp, *argv);
		ft_strdel(&tmp);
		if (!implode)
			return (NULL);
	}
	return (implode);
}
