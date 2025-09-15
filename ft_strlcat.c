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
    size_t l_src;
    size_t l_dst;

    l_src = ft_strlen(src);
    l_dst = ft_strlen(dst);

    if(l_dst == dstsize)
        return(l_dst + l_src);
    if(l_src < dstsize - l_dst)
        ft_memcpy(dst, src, l_src + 1);
    else
    {
        ft_memcpy(dst,src, dstsize - l_dst - 1);
        dst[dstsize - 1] = '\0';
    }
    return(l_src + l_dst);
}
