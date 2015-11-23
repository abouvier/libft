/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_mul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 15:27:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	*ft_complex_mul(t_complex *z, const t_complex *w)
{
	long double	re;

	re = z->re;
	z->re = z->re * w->re - z->im * w->im;
	z->im = re * w->im + z->im * w->re;
	return (z);
}
