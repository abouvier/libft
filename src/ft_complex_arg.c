/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/07 19:39:10 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/07 19:39:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include <math.h>

long double	ft_complex_arg(const t_complex *z)
{
	return (atan2l(z->im, z->re));
}
