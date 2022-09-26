/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 14:24:50 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/11 14:26:03 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_nbrlen_base(int n, int base)
{
	size_t	len;

	if (base < 2 || base > 36)
		return (0);
	len = 1 + (n < 0);
	while (n <= -base || n >= base)
	{
		n /= base;
		len++;
	}
	return (len);
}
