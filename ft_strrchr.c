/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 11:13:46 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-10 11:13:46 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *re;
    char  j;
    unsigned int i;
    re = NULL;

    j = (char) c;
    i = 0;

    while(s[i])
    {
        if(s[i] == j)
            j = (char *) &s[i];
        i++;
    }
    if(s[i] == c)
        re = (char *) &s[i];
    return(re);
}
