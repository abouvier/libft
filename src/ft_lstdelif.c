/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 12:52:32 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/05 17:18:12 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelif(t_list **alst, void *content, t_cmp cmp, t_del del)
{
	t_list	*elem;
	t_list	*next;

	elem = *alst;
	while (elem)
	{
		next = elem->next;
		if (!(*cmp)(elem->content, content))
		{
			if (!elem->prev)
			{
				if (next)
					next->prev = NULL;
				*alst = next;
			}
			else
				elem->prev->next = next;
			ft_lstdelone(&elem, del);
		}
		elem = next;
	}
}
