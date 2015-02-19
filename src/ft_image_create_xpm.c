/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_create_xpm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <mlx.h>

t_img	*ft_image_create_xpm(void *mlx_ptr, char *filename)
{
	t_img	*img;

	if ((img = ft_memalloc(sizeof(*img))))
	{
		if ((img->ptr = mlx_xpm_file_to_image(mlx_ptr, filename, &img->width,
				&img->height)))
		{
			img->data_addr = mlx_get_data_addr(img->ptr, &img->bytes_per_pixel,
				&img->size_line, &img->endian);
			img->bytes_per_pixel /= 8;
			img->mlx_ptr = mlx_ptr;
		}
		else
			ft_memdel(&img);
	}
	return (img);
}
