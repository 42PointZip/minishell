/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 16:44:57 by lasalced          #+#    #+#             */
/*   Updated: 2016/07/25 12:18:37 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"
# include <unistd.h>
# include <sys/stat.h>

# ifdef __APPLE__
# include <sys/types.h>
# define GET_CWD getwd(0);

# elif __LINUX__
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# define GET_CWD get_current_dir_name();

# endif
#endif

