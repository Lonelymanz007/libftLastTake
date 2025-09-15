/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-12 11:19:57 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-12 11:19:57 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    size_t j;

    if(needle[0] == '\0')
        return((char *)haystack);
    while(haystack[i] && i < len)
    {
        j = 0;
        if(haystack[i] == needle[0])
        {
            while(needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
                j++;
            if(needle[j] == '\0')
                return((char *) haystack + i);
        }
        i++;
    }
    return(NULL);
}
