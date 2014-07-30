/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:27:07 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/02 21:43:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*tmp;

	if ((tmp = ft_strjoin(s, "\n")))
		ft_putstr_fd(tmp, fd);
	ft_strdel(&tmp);
}
