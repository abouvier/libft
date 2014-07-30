/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepeat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 14:35:56 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/19 14:37:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrepeat(char c, size_t len)
{
	char	*repeat;

	repeat = ft_strnew(len);
	if (repeat)
		ft_memset(repeat, c, len);
	return (repeat);
}
