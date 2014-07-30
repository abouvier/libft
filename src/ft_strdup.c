/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:54:22 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:54:30 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(*dup));
	if (dup)
		ft_strcpy(dup, s);
	return (dup);
}
