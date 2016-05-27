/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_exp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/07 19:39:10 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/07 19:39:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_complex	*ft_complex_exp(t_complex *z)
{
	t_complex	w;

	w.re = cosl(z->im);
	w.im = sinl(z->im);
	z->re = expl(z->re);
	z->im = 0.0L;
	return (ft_complex_mul(z, &w));
}
