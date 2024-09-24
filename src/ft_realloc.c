/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:46:50 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:40:55 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_realloc(void *ptr, size_t size, size_t new_size)
{
	void	**p;
	void	*new_ptr;

	p = ptr;
	if (size == new_size)
		return (*p);
	new_ptr = ft_memalloc(new_size);
	if (new_ptr)
	{
		ft_memcpy(new_ptr, *p, ft_ulmin(size, new_size));
		ft_memdel(p);
	}
	return (new_ptr);
}
