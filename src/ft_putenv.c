/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 13:29:00 by abouvier          #+#    #+#             */
/*   Updated: 2013/12/27 14:13:16 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putenv(char *string)
{
	int		status;
	char	*equals;

	if (!string || !*string)
		return (-1);
	equals = ft_strchr(string, '=');
	if (!equals)
		return (-1);
	*equals = '\0';
	status = ft_setenv(string, equals + 1, 1);
	*equals = '=';
	return (status);
}
