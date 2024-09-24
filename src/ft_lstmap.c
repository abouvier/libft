/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:32 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 11:40:21 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_types.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*map;
	t_list	*elem;

	map = NULL;
	while (lst && lst->next)
		lst = lst->next;
	while (lst)
	{
		elem = f(lst);
		if (!elem)
			return (map);
		ft_lstadd(&map, elem);
		lst = lst->prev;
	}
	return (map);
}
