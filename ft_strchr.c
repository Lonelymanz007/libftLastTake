/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 11:02:18 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-10 11:02:18 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    i = 0;

    char Find;
    Find = (char) c;

    while(s[i])
    {
        if(s[i] == Find)
            return((char *) &s[i]);
        i++;
    }
    if (s[i] == Find)
        return((char *) &s[i]);
    return(NULL);
}