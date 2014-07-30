/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdeldel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:40:18 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 16:10:51 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdeldel(void *aap)
{
	int		i;
	void	***p;

	i = 0;
	p = (void ***)aap;
	while (*p && i[*p])
		ft_memdel(&i++[*p]);
	ft_memdel(p);
}
