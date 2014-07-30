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
	return (ft_isprint(c) ? c : '?');
}

char		*ft_sanitize(const char *s)
{
	return (ft_strmap(s, &sanitize));
}
