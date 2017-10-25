/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:57:53 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/09 18:36:17 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char		**get_path(void)
{
	char		*tmp;
	char		**result;

	tmp = get_value("PATH");
	if (tmp != NULL)
	{
		result = str_split(tmp, ':');
		str_del(&tmp);
		if (result != NULL)
			return (result);
	}
	return (NULL);
}
