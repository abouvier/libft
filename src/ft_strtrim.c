/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:31:51 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/03 11:08:45 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s)
{
	size_t	len;

	while (ft_isspace(*s))
		s++;
	len = ft_strlen(s);
	while (len && ft_isspace(s[--len]))
		;
	return (ft_strsub(s, 0, len + 1));
}
