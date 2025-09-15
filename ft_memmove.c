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

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    i = 0;

    unsigned char *temp_dst = (unsigned char *)dst;
    const unsigned char *temp_src = (const unsigned char *)src;

    if(!dst && !src)
        return(NULL);
    if(temp_dst > temp_src)
    {
        i = len;
        while(i > 0)
        {
            i--;
            temp_dst[i] = temp_src[i];
        }
    }
    else if(temp_dst < temp_src)
    {
        i = -1;
        while(++i < len)
            temp_dst[i] = temp_src[i];
    }
    return(dst);
}
