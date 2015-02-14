/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/03 14:55:53 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUF_SIZE	1024

# define CHUNK		chunk->content
# define CHUNK_SIZE	chunk->content_size

typedef struct	s_buffer
{
	size_t		size;
	t_list		*chunk;
}				t_buffer;

int				get_next_line(int const fd, char **line);

#endif