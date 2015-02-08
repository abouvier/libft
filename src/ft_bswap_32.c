/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap_32.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:06:23 by abouvier          #+#    #+#             */
/*   Updated: 2015/01/23 23:56:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

uint32_t	ft_bswap_32(uint32_t x)
{
	return (((x & 0xff000000) >> 24) | ((x & 0x00ff0000) >> 8)
	| ((x & 0x0000ff00) << 8) | ((x & 0x000000ff) << 24));
}
