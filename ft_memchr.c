/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-11 15:15:20 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-11 15:15:20 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *temp;
    temp = (unsigned char *)s;
    size_t i;
    i = 0;

    while(i < n)
    {
        if(temp[i] == (unsigned char)c)
            return((void *)temp + i);
        i++;
    }
    return(NULL);
}

//#include <stdio.h>
//int main()
//{
//    char *a = "Find the a in this sentencez";
//    int c = ' ';
//    size_t i = 20;
//    printf("%s", (char *)ft_memchr(a, c, i));
//}
