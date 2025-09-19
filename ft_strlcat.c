/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 10:48:59 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-10 10:48:59 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(src);
	j = ft_strlen(dst);

	if(dstsize <= j)
		return (k + dstsize);
	i = 0;
	
	while(src[i] && (j + i + 1) < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i]	=	'\0';
	return(k + j);
}
// int main()
// {
// 	char dest[11] = "a";
// 	printf("%d", (int)ft_strlcat(dest, "lorem", 15));
// }