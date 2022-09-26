/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:32:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 10:32:23 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	ft_lstswap(t_list *lst, t_list *mst)
{
	const void	*tmp;

	tmp = lst->content;
	lst->content = mst->content;
	mst->content = (void *)tmp;
	tmp = &lst->content_size;
	lst->content_size = mst->content_size;
	mst->content_size = *(size_t *)tmp;
}
