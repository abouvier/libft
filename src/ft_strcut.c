/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:54:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:54:30 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcut(const char *s, size_t start, size_t n)
{
	size_t	len;
	char	*cut;

	len = ft_strlen(s);
	if (start >= len)
		n = 0;
	if ((cut = malloc(len - MIN(n, len - start) + 1)))
		ft_strcpy((char *)ft_memcpy(cut, s, MIN(start, len)) + MIN(start, len),
			s + MIN(start + n, len));
	return (cut);
}
