/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_endl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:59:23 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 13:59:25 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	put_endl(char *str)
{
	put_str(str);
	put_chr('\n');
}
