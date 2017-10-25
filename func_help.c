/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:56:44 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/10 18:26:18 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	func_help(void)
{
	put_endl(ANSI_COLOR_BLUE"\nMinishell v1.0.0"ANSI_COLOR_RESET);
	put_endl(ANSI_COLOR_CYAN"Coded by: Emmanuel Mhlaba\n"ANSI_COLOR_RESET);
	put_str("* Type a command followed by a few");
	put_endl(" argmunents then press enter to run the command\n");
	put_str("* For specific information on a command, type");
	put_endl(" 'man' followed by the command's name\n");
}
