/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 16:44:57 by lasalced          #+#    #+#             */
/*   Updated: 2016/07/25 12:18:37 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "libft/get_next_line/get_next_line.h"
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

/*void	commands(char *line)
{
	if (ft_strcmp(line, "ls"))
		 

}*/

int 		main(int argc, char *argv[], char *envp[])
{
	char	*line;
	pid_t	pid;
	char	*tmp;

	(void)argc;
	(void)argv;
	signal(SIGINT, SIG_IGN);
	char **argument;

	argument = malloc(sizeof(char *) * 3);
	argument[0] = strdup("ls");
	argument[1] = strdup("-la");
	argument[2] = NULL;
/*
 split chaine sur espace
 regarde argv 0 savoir la commande
appel execve passe argv[0] 1er param
*/
	while (42)
	{
		write(1, "§: ", 4);
		if (get_next_line(0, &line))
		{	
			ft_putchar('\n');
		}
		if (ft_strcmp(line, "exit") == 0)
			exit(1);
		else if (ft_strcmp(line, "ls") == 0)
		{
			pid = fork();
			if (pid > 0)
				wait(NULL);
			if (pid == 0)
			{
				execve("/bin/ls", argument, NULL);
			}
		}
		else if (ft_strcmp(line, "pwd") == 0)
		{
			pid = fork();
			if (pid > 0)
				wait(NULL);
			else if (pid == 0)
			{
				execve("/bin/pwd", argv, NULL);
			}
		}
	}
	return (0);
}
