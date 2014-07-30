/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sockcli.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:47 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/09 16:21:53 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/socket.h>
#include <unistd.h>

int	ft_sockcli(const struct addrinfo *ai)
{
	int	fd;

	while (ai)
	{
		if ((fd = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol)) > -1)
		{
			if (!connect(fd, ai->ai_addr, ai->ai_addrlen))
				return (fd);
			close(fd);
		}
		ai = ai->ai_next;
	}
	return (-1);
}
