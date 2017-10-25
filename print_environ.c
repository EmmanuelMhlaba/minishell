/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_environ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 12:52:49 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/10 12:52:59 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_environ(void)
{
	extern char	**environ;
	int			loop;

	loop = 0;
	while (environ[loop] != '\0')
	{
		put_endl(environ[loop]);
		loop++;
	}
}
