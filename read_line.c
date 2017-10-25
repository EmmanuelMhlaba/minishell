/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:59:58 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:00:12 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*read_line(void)
{
	char	*line;
	char	c;
	int		loop;
	int		size;

	loop = 0;
	size = 1024;
	line = str_new(size);
	if (line == NULL)
		return (NULL);
	while (1)
	{
		c = get_char();
		if (c == '\n' || c == '\0')
		{
			line[loop] = '\0';
			return (line);
		}
		line[loop++] = c;
		if (loop >= size - 1)
		{
			size *= 2;
			resize_str(&line, size);
		}
	}
}
