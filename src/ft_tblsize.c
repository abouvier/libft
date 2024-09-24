/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 22:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2015/02/14 23:19:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_tblsize(const void *tbl)
{
	const void	**p;
	size_t		size;

	size = 0;
	p = (const void **)tbl;
	while (p[size])
		size++;
	return (size);
}
