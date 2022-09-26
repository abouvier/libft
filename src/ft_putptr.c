/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:49:32 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/22 12:14:37 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr(unsigned long ptr)
{
	char	*a;
	char	*tmp;

	a = ft_ultoa_base(ptr, 16);
	if (a)
	{
		tmp = ft_strjoin("0x", ft_strtoupper(a));
		if (tmp)
			ft_putstr(tmp);
		ft_strdel(&tmp);
	}
	ft_strdel(&a);
}
