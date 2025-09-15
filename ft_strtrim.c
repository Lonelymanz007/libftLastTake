/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 11:52:22 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 11:52:22 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned char *str1;
    str1 = (unsigned char *)s1;
    unsigned char *str2;
    size_t j;
    char *b;

    if (!s1 || !set)
		return (NULL);
    while(*s1 && ft_strchr(set, *s1))
        s1++;
    str1 = s1;
    str2 = s1 + ft_strchr(s1, '\0');
    while(str2 > str1 && ft_strchr (set, *(str2 - 1)))
        str2--;
    j = str2 - str1;
    b = maloc(sizeof(char) * (j + 1));
    if(!b)
        return(NULL);
    ft_strlcpy(b, s1, (j + 1));
    return(b);
}
