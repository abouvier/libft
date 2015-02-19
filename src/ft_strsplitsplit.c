/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:13:00 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 17:37:08 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplitsplit(const char *s1, const char *s2)
{
	size_t	len;
	t_list	*word;
	char	**split;

	word = NULL;
	while (*s1)
	{
		if (!ft_strchr(s2, *s1))
		{
			len = ft_strcspn(s1, s2);
			ft_lstadd(&word, ft_lstnew(ft_strsub(s1, 0, len), 0));
			s1 += len;
		}
		else
			s1++;
	}
	split = ft_lsttbl(word);
	ft_lstdel(&word, NULL);
	return (split);
}
