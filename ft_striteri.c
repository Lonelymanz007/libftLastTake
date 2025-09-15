/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 19:34:51 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 19:34:51 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	i	=	0;
	if(!s)
		return;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
