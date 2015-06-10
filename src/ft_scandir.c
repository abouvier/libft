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
	t_cmp compar)
{
	DIR				*dirp;
	struct dirent	*entry;

	if (!(dirp = opendir(dirname)))
		return (-1);
	*namelist = NULL;
	while ((entry = readdir(dirp)))
	{
		if (filter && !filter(entry->d_name))
			continue ;
		ft_lstadd(namelist, ft_lstnew(ft_pathjoin(dirname, entry->d_name), 0));
	}
	closedir(dirp);
	if (compar)
		ft_lstsort(*namelist, compar);
	return (ft_lstsize(*namelist));
}
