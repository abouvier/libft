/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:07:17 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 11:07:19 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	strtoupper(char *s)
{
	*s = ft_toupper(*s);
}

char		*ft_strtoupper(char *s)
{
	ft_striter(s, strtoupper);
	return (s);
}
