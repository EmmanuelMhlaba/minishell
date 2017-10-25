/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:23:47 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:24:02 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*str_dup(char *str)
{
	int		loop;
	char	*new;

	loop = 0;
	new = str_new(str_len(str));
	if (new != NULL)
	{
		while (str[loop] != '\0')
		{
			new[loop] = str[loop];
			loop++;
		}
		new[loop] = '\0';
	}
	return (new);
}
