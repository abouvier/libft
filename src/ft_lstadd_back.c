/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 12:18:47 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/03 12:20:58 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (*alst)
	{
		lst = *alst;
		while (lst->next)
			lst = lst->next;
		new->prev = lst;
		lst->next = new;
	}
	else
		*alst = new;
}
