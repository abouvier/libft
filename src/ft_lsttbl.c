/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 15:21:14 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/29 15:33:20 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_types.h"
#include <string.h>

void	*ft_lsttbl(const t_list *lst)
{
	size_t	size;
	void	**tbl;

	size = ft_lstsize(lst);
	tbl = ft_calloc(size + 1, sizeof(*tbl));
	if (tbl)
	{
		while (lst)
		{
			tbl[--size] = lst->content;
			lst = lst->next;
		}
	}
	return (tbl);
}
