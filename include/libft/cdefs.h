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

# ifdef __linux__
#  define _POSIX_C_SOURCE	201112L
# endif

# define M_PI_180			0.01745329251994329577

# define PATH_STDPATH		"/usr/bin:/bin:/usr/sbin:/sbin"
# define PATH_BSHELL		"/bin/sh"

# define ABS(j)				((j) < 0 ? -(j) : (j))
# define MIN(n, m)			((n) < (m) ? (n) : (m))
# define MAX(n, m)			((n) > (m) ? (n) : (m))
# define SQUARE(x)			((x) * (x))

# define COMPLEX(z, re, im)	ft_complex_init(z, re, im)
# define REAL(z, x)			COMPLEX(z, x, 0.0L)
# define ZERO(z)			REAL(z, 0.0L)

# ifdef __linux__

#  include <X11/X.h>
#  include <X11/keysym.h>

#  define MLX_KEY_PRESS			KeyPress
#  define MLX_KEY_PRESS_MASK	KeyPressMask
#  define MLX_KEY_RELEASE		KeyRelease
#  define MLX_KEY_RELEASE_MASK	KeyReleaseMask

#  define MLXK_ESCAPE			XK_Escape
#  define MLXK_UP				XK_Up
#  define MLXK_RIGHT			XK_Right
#  define MLXK_DOWN				XK_Down
#  define MLXK_LEFT				XK_Left
#  define MLXK_KP_ADD			XK_KP_Add
#  define MLXK_KP_SUB			XK_KP_Subtract
#  define MLXK_KP_0				XK_KP_Insert
#  define MLXK_C				XK_c
#  define MLXK_I				XK_i
#  define MLXK_O				XK_o
#  define MLXK_R				XK_r
#  define MLXK_V				XK_v

#  define MLX_MOUSE_MOVE		MotionNotify
#  define MLX_MOUSE_MOVE_MASK	PointerMotionMask

#  define MLXM_LEFT				Button1
#  define MLXM_MIDDLE			Button2
#  define MLXM_RIGHT			Button3
#  define MLXM_WHEEL_UP			Button4
#  define MLXM_WHEEL_DOWN		Button5

# else

#  include <Carbon/Carbon.h>

#  define MLX_KEY_PRESS			2
#  define MLX_KEY_PRESS_MASK	0
#  define MLX_KEY_RELEASE		3
#  define MLX_KEY_RELEASE_MASK	0

#  define MLXK_ESCAPE			kVK_Escape
#  define MLXK_UP				kVK_UpArrow
#  define MLXK_RIGHT			kVK_RightArrow
#  define MLXK_DOWN				kVK_DownArrow
#  define MLXK_LEFT				kVK_LeftArrow
#  define MLXK_KP_ADD			kVK_ANSI_KeypadPlus
#  define MLXK_KP_SUB			kVK_ANSI_KeypadMinus
#  define MLXK_KP_0				kVK_ANSI_Keypad0
#  define MLXK_C				kVK_ANSI_C
#  define MLXK_I				kVK_ANSI_I
#  define MLXK_O				kVK_ANSI_O
#  define MLXK_R				kVK_ANSI_R
#  define MLXK_V				kVK_ANSI_V

#  define MLX_MOUSE_MOVE		6
#  define MLX_MOUSE_MOVE_MASK	0

#  define MLXM_LEFT				1
#  define MLXM_MIDDLE			2
#  define MLXM_RIGHT			3
#  define MLXM_WHEEL_UP			4
#  define MLXM_WHEEL_DOWN		5

# endif

#endif
