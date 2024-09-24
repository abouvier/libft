/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphasort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:42:42 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/10 19:43:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <dirent.h>

int	ft_alphasort(const struct dirent **a, const struct dirent **b)
{
	return (ft_strcmp((*a)->d_name, (*b)->d_name));
}
