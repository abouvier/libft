/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_types.h"
#include <mlx.h>

t_img	*ft_image_create(void *mlx, int width, int height)
{
	t_img	*img;

	img = ft_memalloc(sizeof(*img));
	if (img)
	{
		img->ptr = mlx_new_image(mlx, width, height);
		if (img->ptr)
		{
			img->data = mlx_get_data_addr(img->ptr, &img->bytes_per_pixel,
					&img->size_line, (int *)&img->endian);
			img->bytes_per_pixel /= 8;
			img->height = height;
			img->width = width;
			img->mlx = mlx;
		}
		else
			ft_memdel(&img);
	}
	return (img);
}
