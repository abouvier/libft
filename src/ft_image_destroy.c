/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:22:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:00:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <mlx.h>

void	ft_image_destroy(t_img **img)
{
	mlx_destroy_image((*img)->mlx_ptr, (*img)->ptr);
	ft_memdel(img);
}
