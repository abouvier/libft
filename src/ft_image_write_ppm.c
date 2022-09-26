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
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_image_write_ppm(const char *ppm, const t_img *img)
{
	int		i;
	int		fd;
	int		size;
	char	*data;

	fd = open(ppm, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return ;
	size = img->width * img->height;
	data = malloc(3 * size);
	if (data)
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
		(void)(write(fd, data, 3 * size) + 1);
		free(data);
	}
	close(fd);
}
