/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_in_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:56:57 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/09 18:37:57 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	*join_strs(char *name, char *path)
{
	char	*tmp;
	char	*result;

	tmp = str_join(path, "/");
	result = str_join(tmp, name);
	str_del(&tmp);
	return (result);
}

char		*found_in_path(char *name)
{
	char		**path;
	char		*tmp;
	int			loop;
	int			found;

	path = get_path();
	loop = 0;
	found = -1;
	if (path == NULL)
		return (NULL);
	while (path[loop] != '\0')
	{
		tmp = join_strs(name, path[loop]);
		found = access(tmp, F_OK);
		if (found != -1)
		{
			del_strs(&path);
			return (tmp);
		}
		str_del(&tmp);
		loop++;
	}
	del_strs(&path);
	return (NULL);
}
