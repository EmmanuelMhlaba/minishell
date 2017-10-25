/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 18:29:53 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/09 18:34:15 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_name(char *var)
{
	int		loop;
	char	*name;

	loop = 0;
	while (var[loop] != '\0' && var[loop] != '=')
		loop++;
	name = str_new(loop);
	if (name == NULL)
		return (NULL);
	loop = 0;
	while (var[loop] != '\0' && var[loop] != '=')
	{
		name[loop] = var[loop];
		loop++;
	}
	name[loop] = '\0';
	return (name);
}
