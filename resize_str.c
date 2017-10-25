/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:00:20 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:00:24 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	resize_str(char **str, size_t new_size)
{
	char	*tmp;

	tmp = str[0];
	str[0] = str_new(new_size);
	if (str[0] != NULL)
	{
		str_cpy(str[0], tmp);
		str_del(&tmp);
	}
}
