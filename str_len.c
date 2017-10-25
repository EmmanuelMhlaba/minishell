/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:24:13 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:24:15 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

size_t	str_len(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
