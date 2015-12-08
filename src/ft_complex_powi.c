/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_powi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:08 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 15:27:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	*ft_complex_powi(t_complex *z, unsigned int n)
{
	t_complex	w;

	w = *z;
	*z = *REAL(1.0L);
	while (n--)
		ft_complex_mul(z, &w);
	return (z);
}
