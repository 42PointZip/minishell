/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsmartpushback.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 11:04:25 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/16 11:07:07 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsmartpushback(t_list **start, t_list *new)
{
	static t_list	*memstart = NULL;
	static t_list	*memend = NULL;

	if (memstart && *start == memstart)
	{
		memend->next = new;
		memend = new;
	}
	else
	{
		ft_lstpushback(start, new);
		memstart = *start;
		memend = new;
	}
}
