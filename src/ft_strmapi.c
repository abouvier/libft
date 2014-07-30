/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:45:34 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/25 16:03:23 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	char			*mapi;

	mapi = ft_strdup(s);
	if (mapi)
	{
		i = 0;
		p = mapi;
		while (*p)
			*p++ = (*f)(i++, *s++);
	}
	return (mapi);
}
