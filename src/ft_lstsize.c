/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 12:23:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/03 12:25:28 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

size_t	ft_lstsize(const t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
