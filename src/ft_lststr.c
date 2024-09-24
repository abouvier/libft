/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:54:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:54:30 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_types.h"
#include <stdlib.h>
#include <string.h>

char	*ft_lststr(const t_list *lst)
{
	char	*s;
	size_t	len;

	len = ft_lstlen(lst);
	s = malloc(len + 1);
	if (s)
	{
		s[len] = '\0';
		while (lst)
		{
			if (lst->content_size)
			{
				len -= lst->content_size - 1;
				ft_memcpy(s + len, lst->content, lst->content_size - 1);
			}
			lst = lst->next;
		}
	}
	return (s);
}
