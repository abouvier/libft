/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:54:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:54:30 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinsert(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	*insert;

	len = ft_strlen(s1);
	if ((insert = ft_strnew(len + ft_strlen(s2))))
		ft_strcat(ft_strcat(ft_strncat(insert, s1, n), s2), s1 + MIN(n, len));
	return (insert);
}
