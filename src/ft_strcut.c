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

char	*ft_strcut(const char *s, size_t start, size_t n)
{
	size_t	len;
	char	*cut;
	char	*tmp;

	len = ft_strlen(s);
	tmp = ft_strsub(s, 0, MIN(start, len));
	cut = ft_strjoin(tmp, &s[MIN(start + n, len)]);
	ft_strdel(&tmp);
	return (cut);
}
