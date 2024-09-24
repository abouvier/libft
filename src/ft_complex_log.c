/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_log.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/07 19:39:10 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/07 19:39:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_types.h"
#include <math.h>

t_complex	*ft_complex_log(t_complex *z)
{
	long double	r;

	r = ft_complex_abs(z);
	z->im = ft_complex_arg(z);
	z->re = logl(r);
	return (z);
}
