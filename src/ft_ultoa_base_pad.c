/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base_pad.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:11:10 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:28:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ultoa_base_pad(unsigned long n, int base, size_t pad_len)
{
	char	*a;
	char	*tmp;

	a = ft_ultoa_base(n, base);
	if (a)
	{
		tmp = ft_strpad(a, pad_len, '0', left);
		ft_strdel(&a);
		a = tmp;
	}
	return (a);
}
