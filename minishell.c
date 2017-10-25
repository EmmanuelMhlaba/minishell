/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:59:00 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/10 18:41:14 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char		**args;
	char		*line;

	while (1)
	{
		put_str(ANSI_COLOR_GREEN"minishell> "ANSI_COLOR_RESET);
		line = read_line();
		args = str_split(line, ' ');
		if (str_len(line) > 0 && args[0] != NULL)
		{
			if (str_cmp(args[0], "exit") == 0)
			{
				str_del(&line);
				del_strs(&args);
				return (0);
			}
			execute_command(args);
			str_del(&line);
			del_strs(&args);
		}
	}
	return (0);
}
