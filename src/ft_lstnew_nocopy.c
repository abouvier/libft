/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_nocopy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 07:15:11 by abouvier          #+#    #+#             */
/*   Updated: 2017/08/07 07:18:24 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_nocopy(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = ft_memalloc(sizeof(*lst))))
	{
		lst->content = (void *)content;
		lst->content_size = (content ? content_size : 0);
	}
	return (lst);
}
