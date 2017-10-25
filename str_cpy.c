/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:23:18 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:23:21 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	str_cpy(char *dst, char *src)
{
	int	loop;

	loop = 0;
	while (src[loop] != '\0')
	{
		dst[loop] = src[loop];
		loop++;
	}
	dst[loop] = '\0';
}
