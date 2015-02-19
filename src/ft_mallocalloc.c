/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:46:50 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:40:55 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mallocalloc(size_t c1, size_t s1, size_t c2, size_t s2)
{
	size_t	i;
	void	**ptr;

	if ((ptr = ft_calloc(c1 + 1, s1)))
	{
		i = 0;
		while (i < c1)
		{
			if (!(ptr[i] = ft_calloc(c2, s2)))
			{
				ft_memdeldel(&ptr);
				return (NULL);
			}
			i++;
		}
	}
	return (ptr);
}
