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

    while(s[i])
    {
        if(s[i] == (char) c)
            return((char *) &s[i]);
        i++;
    }
    if (s[i] == (char) c)
        return((char *) &s[i]);
    return(NULL);
}
//#include <stdio.h>
//int main()
//{
//    char *a = "abcdefg";
//    printf("%s", ft_strchr(a, 'd'));
//}