/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/03 15:00:36 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

static int	reset_buf(t_buffer *buf)
{
	ft_lstdel(&buf->chunks, ft_lstfree);
	buf->size = 0;
	return (-1);
}

static void	build_line(t_buffer *buf, char *line)
{
	t_list	*next;

	while (buf->chunks)
	{
		next = buf->chunks->next;
		buf->size -= buf->chunks->content_size;
		ft_memcpy(line + buf->size, buf->chunks->content,
			buf->chunks->content_size);
		ft_lstdelone(&buf->chunks, ft_lstfree);
		buf->chunks = next;
	}
}

static int	set_next_line(t_buffer *buf, char *newline, char **line)
{
	char	s[BUF_SIZE];
	size_t	new_size;

	if (newline)
	{
		new_size = buf->chunks->content_size
			- (newline - (char *)buf->chunks->content) - 1;
		ft_memcpy(s, newline + 1, new_size);
		buf->chunks->content_size -= new_size + 1;
		buf->size -= new_size + 1;
	}
	*line = ft_strnew(buf->size);
	if (!*line)
		return (reset_buf(buf));
	build_line(buf, *line);
	if (newline)
	{
		if (!ft_lstadd_new(&buf->chunks, s, new_size))
			return (reset_buf(buf));
		buf->size = new_size;
	}
	return (1);
}

int	get_next_line(int const fd, char **line)
{
	ssize_t			r;
	char			*n;
	char			s[BUF_SIZE];
	static t_buffer	buf;

	r = 42;
	n = NULL;
	if (buf.chunks)
		n = ft_memchr(buf.chunks->content, '\n', buf.chunks->content_size);
	while (!n && r)
	{
		r = read(fd, s, BUF_SIZE);
		if (r < 0)
			return (reset_buf(&buf));
		if (!ft_lstadd_new(&buf.chunks, s, r))
			return (reset_buf(&buf));
		buf.size += r;
		n = ft_memchr(buf.chunks->content, '\n', buf.chunks->content_size);
	}
	if (buf.size)
		return (set_next_line(&buf, n, line));
	reset_buf(&buf);
	return (0);
}
