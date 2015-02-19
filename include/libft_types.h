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

typedef enum		e_endian
{
	little,
	big
}					t_endian;

typedef struct		s_img
{
	int				bpp;
	int				bpr;
	void			*mlx;
	void			*ptr;
	char			*data;
	int				width;
	int				height;
	t_endian		endian;
}					t_img;

typedef struct addrinfo	t_ai;

#endif
