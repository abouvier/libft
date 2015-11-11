/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:55:44 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/02 14:20:14 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort(void *base, size_t nmemb, size_t size, t_cmp compar)
{
	size_t	i;
	size_t	nmemb2;
	char	*current;

	nmemb2 = nmemb;
	while (nmemb2)
	{
		i = 1;
		nmemb2 = 0;
		while (i < nmemb)
		{
			current = (char *)base + i * size;
			if (compar(current - size, current) > 0)
			{
				ft_memswap(current - size, current, size);
				nmemb2 = i;
			}
			i++;
		}
		nmemb = nmemb2;
	}
}
