/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-12 10:45:06 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-12 10:45:06 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *temp1;
    temp1 = (unsigned char *)s1;
    unsigned char *temp2;
    temp2  = (unsigned char *)s2;
    
    size_t i;
    i = 0;

    while(i < n)
    {
        if(temp1[i] != temp2[i])
            return(temp1[i] - temp2[i]);
        i++;
    }
    return(0);
}
