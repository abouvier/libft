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

static void	ft_lstswap(t_list *l, t_list *m)
{
	void	*tmp;

	tmp = l->content;
	l->content = m->content;
	m->content = tmp;
	tmp = &l->content_size;
	l->content_size = m->content_size;
	m->content_size = *(size_t *)tmp;
}

void		ft_lstsort(t_list *lst, t_cmp cmp)
{
	size_t	i;
	t_list	*l;
	size_t	size;
	size_t	newsize;

	newsize = 1;
	size = ft_lstsize(lst);
	while (newsize)
	{
		i = 1;
		l = lst;
		newsize = 0;
		while (i < size)
		{
			if (cmp(l->content, l->next->content) > 0)
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
