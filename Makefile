# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/07 13:54:26 by emmmhla           #+#    #+#              #
#    Updated: 2016/07/10 17:33:31 by emmmhla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "minishell"

SOURCES = \
	str_clr.c \
	str_cpy.c \
	str_del.c \
	str_new.c \
	str_len.c \
	str_dup.c \
	put_chr.c \
	put_str.c \
	put_endl.c \
	str_join.c \
	str_split.c \
	get_char.c \
	read_line.c \
	resize_str.c \
	del_strs.c \
	str_cmp.c \
	get_path.c \
	found_in_path.c \
	execute_command.c \
	launch_process.c \
	func_cd.c \
	func_help.c \
	mem_for_str_split.c \
	unset_env.c \
	set_env.c \
	ft_atoi.c \
	get_name.c \
	get_value.c \
	func_env.c \
	print_environ.c \
	func_export.c \
	func_unset.c \
	str_chr.c \
	func_echo.c \
	minishell.c

HEADER = minishell.h

FLAGS = -Wall -Werror -Wextra

all:
	@gcc $(FLAGS) $(SOURCES) $(HEADER)
	@mv a.out $(NAME)

clean:
	@rm $(NAME)

re: clean all
