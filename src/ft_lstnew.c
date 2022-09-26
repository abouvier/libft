/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:47 by abouvier          #+#    #+#             */
/*   Updated: 2017/08/07 07:18:24 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = ft_memalloc(sizeof(*lst));
	if (lst && content)
	{
		lst->content = malloc(content_size);
		if (lst->content)
		{
			ft_memcpy(lst->content, content, content_size);
			lst->content_size = content_size;
		}
		else
			ft_memdel(&lst);
	}
	return (lst);
}
