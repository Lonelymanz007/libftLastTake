/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 08:55:44 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-10 08:55:44 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src = (const unsigned char *)src;

	i = 0;
	temp_dst = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (temp_dst > temp_src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			temp_dst[i] = temp_src[i];
		}
	}
	else if (temp_dst < temp_src)
	{
		i = -1;
		while (++i < len)
			temp_dst[i] = temp_src[i];
	}
	return (dst);
}
// int main()
// {
//     char a[] = "abcdef";
//     char *b = "ghijkl";
//     printf("%s", (char *)ft_memmove(a, b, 3));
// }