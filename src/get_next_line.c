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

static int	reset_buf(t_buffer *buf, char **junk)
{
	ft_lstdel(&buf->chunks, ft_lstfree);
	if (junk)
		ft_strdel(junk);
	buf->size = 0;
	return (-1);
}

static void	build_line(t_buffer *buf, char *line)
{
	t_list	*next;

	while (buf->chunks)
	{
		next = buf->chunks->next;
		buf->size -= buf->CHUNK_SIZE;
		ft_memcpy(line + buf->size, buf->CHUNK, buf->CHUNK_SIZE);
		ft_lstdelone(&buf->chunks, ft_lstfree);
		buf->chunks = next;
	}
}

static int	set_next_line(t_buffer *buf, char *newline, char **line)
{
	char	*s;
	t_list	*chunk;
	size_t	new_size;

	if (newline)
	{
		new_size = buf->CHUNK_SIZE - (newline - (char *)buf->CHUNK) - 1;
		if (!(s = ft_strnew(new_size - 1)))
			return (reset_buf(buf, NULL));
		ft_memcpy(s, newline + 1, new_size);
		buf->CHUNK_SIZE -= new_size + 1;
		buf->size -= new_size + 1;
	}
	if (!(*line = ft_strnew(buf->size)))
		return (reset_buf(buf, &s));
	build_line(buf, *line);
	if (newline)
	{
		if (!(chunk = ft_lstnew_nocopy(s, new_size)))
			return (reset_buf(buf, &s));
		ft_lstadd(&buf->chunks, chunk);
		buf->size = new_size;
	}
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	ssize_t			r;
	char			*n;
	char			*s;
	static t_buffer	buf;
	t_list			*chunk;

	r = 42;
	while (!buf.chunks
		|| (!(n = ft_memchr(buf.CHUNK, '\n', buf.CHUNK_SIZE)) && r))
	{
		if (!(s = ft_strnew(BUF_SIZE - 1))
			|| (r = read(fd, s, BUF_SIZE)) < 0
			|| !(chunk = ft_lstnew_nocopy(s, r)))
			return (reset_buf(&buf, &s));
		ft_lstadd(&buf.chunks, chunk);
		buf.size += r;
	}
	if (buf.size)
		return (set_next_line(&buf, n, line));
	reset_buf(&buf, NULL);
	return (0);
}
