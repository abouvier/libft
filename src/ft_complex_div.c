/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_div.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 15:27:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

t_complex	*ft_complex_div(t_complex *z, const t_complex *w)
{
	long double	d;
	long double	re;

	re = z->re;
	d = SQUARE(w->re) + SQUARE(w->im);
	z->re = (z->re * w->re + z->im * w->im) / d;
	z->im = (z->im * w->re - re * w->im) / d;
	return (z);
}
