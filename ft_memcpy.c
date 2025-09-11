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

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *temp_dst = (unsigned char *)dst;
    const unsigned char *temp_src = (const unsigned char *)src;

    size_t i;
    i = 0;

    if((temp_dst == temp_src) || n == 0)
        return(dst);

    while(i < n)
    {
        temp_dst[i] = temp_src[i];
        i++;
    }
    return(dst);
}
