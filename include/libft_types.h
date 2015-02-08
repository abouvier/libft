/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2015/02/05 02:24:52 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_H
# define LIBFT_TYPES_H

# include <stddef.h>
# include <netdb.h>

typedef int			(*t_cmp)();
typedef void		(*t_del)();

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*prev;
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

typedef struct addrinfo	t_ai;

#endif
