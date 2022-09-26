/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_socksrv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:47 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/09 16:21:53 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>

int	ft_socksrv(const struct addrinfo *ai, int backlog)
{
	int			fd;
	static int	on = 1;

	while (ai)
	{
		fd = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
		if (fd > -1
			&& !setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)))
		{
			if (!bind(fd, ai->ai_addr, ai->ai_addrlen) && !listen(fd, backlog))
				return (fd);
			close(fd);
		}
		ai = ai->ai_next;
	}
	return (-1);
}
