/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 19:12:49 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 19:12:49 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *b;
	size_t i;
	i = 0;
	size_t len;
    if(!s)
        return(NULL);
	len = ft_strlen(s);
	b = malloc(len + 1);
	if(!b)
		return(NULL);
	while(i < len)
	{
		b[i] = f(i, s[i]);
		i++;
	}
	b[len] = '\0';
	return(b);
}
