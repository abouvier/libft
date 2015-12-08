/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_pow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/07 19:39:10 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/07 19:39:39 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	*ft_complex_pow(t_complex *w, const t_complex *z)
{
	return (ft_complex_exp(ft_complex_mul(ft_complex_log(w), z)));
}
