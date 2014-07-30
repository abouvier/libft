/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_cdefs.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/02/09 22:27:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CDEFS_H
# define LIBFT_CDEFS_H

# define M_PI_180			0.01745329251994329577

# define PATH_STDPATH		"/usr/bin:/bin:/usr/sbin:/sbin"
# define PATH_BSHELL		"/bin/sh"

# define ABS(j)				((j) < 0 ? -(j) : (j))
# define MIN(n, m)			((n) < (m) ? (n) : (m))
# define MAX(n, m)			((n) > (m) ? (n) : (m))
# define SQUARE(x)			((x) * (x))

# define DPRINT(fd, ...)	ft_putstrs_fd(fd, __VA_ARGS__, (char *)NULL)
# define PRINT(...)			DPRINT(1, __VA_ARGS__)
# define ERROR(...)			DPRINT(2, __VA_ARGS__)

#endif
