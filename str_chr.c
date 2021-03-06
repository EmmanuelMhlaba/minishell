/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_chr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:16:11 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/10 16:21:30 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		str_chr(char *str, char c)
{
	int		loop;

	loop = 0;
	while (str[loop] != '\0')
	{
		if (str[loop] == c)
			return (1);
		loop++;
	}
	return (-1);
}
