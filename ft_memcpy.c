/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 08:25:23 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-04 08:25:23 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	unsigned char *dest;
	dest = (unsigned char *)dst;
	unsigned char *source;
	source = (unsigned char *)src;
	size_t i;
	i = 0;

	if(!dst && !src)
		return(NULL);
	while(i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return(dst);
}
