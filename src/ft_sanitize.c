/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sanitize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:11:09 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:13:54 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	sanitize(char c)
{
	if (ft_isprint(c))
		return (c);
	return ('?');
}

char	*ft_sanitize(const char *s)
{
	return (ft_strmap(s, sanitize));
}
