/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:49:32 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/18 12:56:15 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pad(int n, size_t pad_len, char pad_char, t_dir dir)
{
	char	*s;
	char	*tmp;

	if ((tmp = ft_itoa(n)))
	{
		if ((s = ft_strpad(tmp, pad_len, pad_char, dir)))
			ft_putstr(s);
		ft_strdel(&s);
	}
	ft_strdel(&tmp);
}
