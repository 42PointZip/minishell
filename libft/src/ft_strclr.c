/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:58:35 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 12:29:15 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_strclr(char *s)
{
	size_t		i;

	if (s)
	{
		i = ft_strlen(s);
		ft_bzero(s, i);
	}
}
