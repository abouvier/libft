/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_sqrt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 15:27:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_complex	*ft_complex_sqrt(t_complex *z)
{
	long double	r;

	r = ft_complex_abs(z);
	z->im = ft_fsgnl(z->im) * sqrtl((r - z->re) / 2.0L);
	z->re = sqrtl((r + z->re) / 2.0L);
	return (z);
}
