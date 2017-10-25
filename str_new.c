/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:24:31 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:24:33 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*str_new(size_t size)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * size + 1);
	if (new != NULL)
	{
		new[size] = '\0';
		str_clr(new);
	}
	return (new);
}
