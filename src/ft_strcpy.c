/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:54:46 by abouvier          #+#    #+#             */
/*   Updated: 2013/11/21 10:55:15 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*p;

	p = s1;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (s1);
}
