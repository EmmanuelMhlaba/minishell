/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_cd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:58:13 by emmmhla           #+#    #+#             */
/*   Updated: 2016/07/07 13:58:17 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	print_err(char *dir)
{
	put_str("error: could not change to '");
	put_str(dir);
	put_endl("' directory");
}

static void	change_dir(char *path)
{
	char	*pwd;

	pwd = str_new(1024);
	getcwd(pwd, 1024);
	if (chdir(path) != 0)
		print_err(path);
	else
	{
		if (pwd != NULL)
		{
			set_env("OLDPWD", pwd, 1);
			str_del(&pwd);
		}
		else
			unset_env("OLDPWD");
	}
}

static void	handle_home(char **args)
{
	char	*home;
	char	*tmp;

	home = get_value("HOME");
	if (home != NULL)
	{
		if (args[1] == NULL || str_len(args[1]) == 1)
			change_dir(home);
		else
		{
			tmp = str_join(home, "/");
			home = str_join(tmp, &(args[1][2]));
			change_dir(home);
			str_del(&tmp);
		}
		str_del(&home);
	}
}

void		func_cd(char **args)
{
	char	*last_dir;

	if (args[1] != NULL && args[1][0] != '~')
	{
		if (args[1][0] == '-')
		{
			last_dir = get_value("OLDPWD");
			if (last_dir == NULL)
				put_endl("error: OLDPWD not set");
			else
			{
				change_dir(last_dir);
				str_del(&last_dir);
			}
		}
		else
			change_dir(args[1]);
	}
	else
		handle_home(args);
}
