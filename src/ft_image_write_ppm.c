/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_write_ppm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_image_write_ppm(const char *ppm, const t_img *img)
{
	int		i;
	int		fd;
	int		size;
	char	*data;

	size = img->width * img->height;
	if ((fd = open(ppm, O_WRONLY | O_CREAT | O_TRUNC, 0644)) != -1
		&& (data = ft_memalloc(3 * size)))
	{
		i = 0;
		ft_dprintf(fd, "P6\n%d %d\n255\n", img->width, img->height);
		while (i < size)
		{
			data[i * 3] = img->data[i * 4 + 2];
			data[i * 3 + 1] = img->data[i * 4 + 1];
			data[i * 3 + 2] = img->data[i * 4];
			i++;
		}
		i = write(fd, data, 3 * size);
		ft_strdel(&data);
	}
	close(fd);
}
