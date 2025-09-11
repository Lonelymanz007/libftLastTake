/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 08:16:22 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-04 08:16:22 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp;
    temp = (unsigned char *)b;

    size_t i;
    i = 0;

    while (i < len)
    {
        temp[i] = (unsigned char )c;
        i++;
    }
    return(b);
}