/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:55:44 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/02 14:20:14 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_tblswap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void		ft_tblsort(void *atbl, size_t size, t_cmp cmp)
{
	size_t	i;
	void	**tbl;
	size_t	newsize;

	tbl = atbl;
	newsize = 1;
	while (newsize)
	{
		i = 1;
		newsize = 0;
		while (i < size)
		{
			if ((*cmp)(tbl[i - 1], tbl[i]) > 0)
			{
				ft_tblswap(&tbl[i - 1], &tbl[i]);
				newsize = i;
			}
			i++;
		}
		size = newsize;
	}
}
