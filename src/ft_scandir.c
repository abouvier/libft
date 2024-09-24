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
#include "libft_types.h"
#include <dirent.h>
#include <string.h>

int	ft_scandir(const char *dirname, t_list **namelist, t_filter filter,
	int (*compar)(const struct dirent **, const struct dirent **))
{
	int				size;
	DIR				*dirp;
	struct dirent	*entry;

	dirp = opendir(dirname);
	if (!dirp)
		return (-1);
	size = 0;
	*namelist = NULL;
	entry = readdir(dirp);
	while (entry)
	{
		if (!filter || filter(entry))
		{
			if (ft_lstadd_new(namelist, entry, entry->d_reclen))
				size++;
		}
		entry = readdir(dirp);
	}
	closedir(dirp);
	if (compar && size > 1)
		ft_lstsort(*namelist, (t_cmp)compar);
	return (size);
}
