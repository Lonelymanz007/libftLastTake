/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 10:46:43 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 10:46:43 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *temp;
	size_t i;
	i = 0;
	if(start >= ft_strlen(s))
		len = 0;
	if(ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	temp = malloc(sizeof(char) * (len + 1));
	if(!temp)
		return(NULL);
	while(i < len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return(temp); 
}
