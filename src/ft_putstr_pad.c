/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:32:24 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/18 12:32:56 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_pad(char const *s, size_t pad_len, t_dir dir)
{
	s = ft_strpad(s, pad_len, ' ', dir);
	if (s)
		ft_putstr(s);
	ft_strdel((char **)&s);
}
