/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scandir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:42:42 by abouvier          #+#    #+#             */
/*   Updated: 2015/06/10 19:43:22 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <dirent.h>

int	ft_scandir(const char *dirname, t_list **namelist, t_filter filter,
	int (*compar)(const struct dirent **, const struct dirent **))
{
	size_t			size;
	DIR				*dirp;
	struct dirent	*entry;

	if (!(dirp = opendir(dirname)))
		return (-1);
	size = 0;
	*namelist = NULL;
	while ((entry = readdir(dirp)))
	{
		if (filter && !filter(entry))
			continue ;
		ft_lstadd(namelist, ft_lstnew(ft_memcpy(ft_memalloc(entry->d_reclen),
			entry, entry->d_reclen), entry->d_reclen));
		size++;
	}
	closedir(dirp);
	if (compar && size > 1)
		ft_lstsort(*namelist, (t_cmp)compar);
	return (size);
}
