/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2015/02/05 02:24:52 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_H
# define LIBFT_TYPES_H

# include "libft_cdefs.h"
# include <string.h>
# include <dirent.h>

typedef unsigned int	t_uint;
typedef unsigned long	t_ulong;

typedef int				(*t_cmp)(const void *, const void *);
typedef void			(*t_del)(void *, size_t);
typedef int				(*t_filter)(const struct dirent *);

typedef struct s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
	struct s_list		*prev;
}						t_list;

typedef enum e_dir
{
	left,
	right
}						t_dir;

typedef enum e_endian
{
	little,
	big
}						t_endian;

typedef struct s_img
{
	void				*mlx;
	void				*ptr;
	char				*data;
	int					width;
	int					height;
	int					bytes_per_pixel;
	int					size_line;
	t_endian			endian;
}						t_img;

typedef struct s_complex
{
	long double			re;
	long double			im;
}						t_complex;

#endif
