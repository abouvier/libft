/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdefs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/02/09 22:27:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CDEFS_H
# define LIBFT_CDEFS_H

# define M_PI_180				0.01745329251994329577

# define PATH_STDPATH			"/usr/bin:/bin:/usr/sbin:/sbin"
# define PATH_BSHELL			"/bin/sh"

# ifdef __linux__

#  define MLX_KEY_PRESS			2
#  define MLX_KEY_PRESS_MASK	1
#  define MLX_KEY_RELEASE		3
#  define MLX_KEY_RELEASE_MASK	2

#  define MLXK_ESCAPE			0xff1b
#  define MLXK_UP				0xff52
#  define MLXK_RIGHT			0xff53
#  define MLXK_DOWN				0xff54
#  define MLXK_LEFT				0xff51
#  define MLXK_KP_ADD			0xffab
#  define MLXK_KP_SUB			0xffad
#  define MLXK_KP_0				0xff9e
#  define MLXK_C				0x0063
#  define MLXK_I				0x0069
#  define MLXK_O				0x006f
#  define MLXK_R				0x0072
#  define MLXK_V				0x0076

#  define MLX_MOUSE_MOVE		6
#  define MLX_MOUSE_MOVE_MASK	64

#  define MLXM_LEFT				1
#  define MLXM_MIDDLE			2
#  define MLXM_RIGHT			3
#  define MLXM_WHEEL_UP			4
#  define MLXM_WHEEL_DOWN		5

# else

#  define MLX_KEY_PRESS			2
#  define MLX_KEY_PRESS_MASK	0
#  define MLX_KEY_RELEASE		3
#  define MLX_KEY_RELEASE_MASK	0

#  define MLXK_ESCAPE			0x35
#  define MLXK_UP				0x7E
#  define MLXK_RIGHT			0x7C
#  define MLXK_DOWN				0x7D
#  define MLXK_LEFT				0x7B
#  define MLXK_KP_ADD			0x45
#  define MLXK_KP_SUB			0x4E
#  define MLXK_KP_0				0x52
#  define MLXK_C				0x08
#  define MLXK_I				0x22
#  define MLXK_O				0x1F
#  define MLXK_R				0x0F
#  define MLXK_V				0x09

#  define MLX_MOUSE_MOVE		6
#  define MLX_MOUSE_MOVE_MASK	0

#  define MLXM_LEFT				1
#  define MLXM_MIDDLE			2
#  define MLXM_RIGHT			3
#  define MLXM_WHEEL_UP			4
#  define MLXM_WHEEL_DOWN		5

# endif

#endif
