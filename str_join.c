/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:24:50 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 14:24:55 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*str_join(char *s1, char *s2)
{
	char	*new;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	new = str_new(len_s1 + len_s2);
	if (new != NULL)
	{
		str_cpy(new, s1);
		str_cpy(&(new[len_s1]), s2);
	}
	return (new);
}
