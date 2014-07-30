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

void	ft_image_write_ppm(const char *filename, const t_img *img)
{
	int		i;
	int		fd;
	char	*data;

	if ((data = (char *)ft_memalloc(3 * img->width * img->height))
		&& (fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644)) != -1)
	{
		i = 0;
		ft_putendl_fd("P6", fd);
		ft_putnbr_fd(img->width, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd(img->height, fd);
		ft_putendl_fd("\n255", fd);
		while (i < img->width * img->height)
		{
			data[i * 3] = img->data_addr[i * 4 + 2];
			data[i * 3 + 1] = img->data_addr[i * 4 + 1];
			data[i * 3 + 2] = img->data_addr[i * 4];
			i++;
		}
		i = write(fd, data, 3 * img->width * img->height);
		close(fd);
	}
	ft_strdel(&data);
}
