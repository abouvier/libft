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
#include "libft_types.h"
#include <string.h>

static void	*kthxbye(t_list **word)
{
	ft_lstdel(word, ft_lstfree);
	return (NULL);
}

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
			if (!ft_lstadd_new(&word, s1, len + 1))
				return (kthxbye(&word));
			len[(char *)word->content] = '\0';
			s1 += len;
		}
		else
			s1++;
	}
	split = ft_lsttbl(word);
	if (!split)
		return (kthxbye(&word));
	ft_lstdel(&word, NULL);
	return (split);
}
