/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 10:32:23 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list *lst, t_cmp cmp)
{
	size_t	i;
	t_list	*l;
	size_t	size;
	size_t	newsize;

	size = ft_lstsize(lst);
	newsize = size;
	while (newsize)
	{
		i = 1;
		l = lst;
		newsize = 0;
		while (i < size)
		{
			if (cmp(&l->content, &l->next->content) > 0)
			{
				ft_lstswap(l, l->next);
				newsize = i;
			}
			l = l->next;
			i++;
		}
		size = newsize;
	}
}
