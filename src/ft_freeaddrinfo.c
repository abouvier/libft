/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeaddrinfo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:06:23 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:06:24 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freeaddrinfo(struct addrinfo *ai)
{
	struct addrinfo	*next;

	while (ai)
	{
		next = ai->ai_next;
		ft_strdel(&ai->ai_canonname);
		ft_memdel(&ai->ai_addr);
		ft_memdel(&ai);
		ai = next;
	}
}
