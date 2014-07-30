/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 13:11:15 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/18 12:31:21 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpad(const char *s, size_t pad_len, char pad_char, t_dir dir)
{
	size_t	len;
	char	*pad;

	len = ft_strlen(s);
	if (pad_len <= len)
		return (ft_strdup(s));
	pad = ft_strnew(pad_len);
	ft_memset(pad, pad_char, pad_len);
	if (dir == left)
		ft_memcpy(pad + pad_len - len, s, len);
	else
		ft_memcpy(pad, s, len);
	return (pad);
}
