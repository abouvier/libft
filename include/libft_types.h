/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/02/09 22:27:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_H
# define LIBFT_TYPES_H

# include <stdarg.h>
# include <stddef.h>

typedef int			(*t_cmp)();
typedef void		(*t_del)();

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	void			*content;
	size_t			content_size;
}					t_list;

typedef enum		e_dir
{
	left,
	right
}					t_dir;

typedef struct		s_img
{
	void			*ptr;
	int				width;
	int				endian;
	int				height;
	void			*mlx_ptr;
	int				size_line;
	char			*data_addr;
	int				bytes_per_pixel;
}					t_img;

typedef struct		s_print
{
	char			format;
	int				(*print)(int, va_list *);
}					t_print;

#endif
