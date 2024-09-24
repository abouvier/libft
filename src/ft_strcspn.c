/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 15:21:14 by abouvier          #+#    #+#             */
/*   Updated: 2014/01/29 15:33:20 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strcspn(const char *s1, const char *s2)
{
	size_t	len;

	len = 0;
	while (!ft_strchr(s2, *s1++))
		len++;
	return (len);
}
