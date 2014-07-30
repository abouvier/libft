/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_pixel_put.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_image_pixel_put(t_img *img, int x, int y, unsigned color_value)
{
	ft_memcpy(img->data_addr + x * img->bytes_per_pixel + y * img->size_line,
		&color_value, img->bytes_per_pixel);
}
