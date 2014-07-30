/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_pixel_get.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2014/03/21 15:48:01 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_image_pixel_get(const t_img *img, int x, int y)
{
	unsigned	color_value;

	color_value = 0;
	ft_memcpy(&color_value,
		img->data_addr + x * img->bytes_per_pixel + y * img->size_line,
		img->bytes_per_pixel);
	return (color_value);
}
