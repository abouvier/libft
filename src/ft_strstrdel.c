/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:40:18 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 16:10:51 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strstrdel(char ***ass)
{
	int	i;

	i = 0;
	while (*ass && i[*ass])
		ft_strdel(*ass + i++);
	ft_memdel(ass);
}
