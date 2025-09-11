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

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char uc;
    const unsigned char *ptr;

    ptr = (const unsigned char *)s;
    uc = (unsigned char)c;
    while(n-- > 0)
    {
        if(*ptr == uc)
            return((void *)ptr);
        ptr++;
    }
    return(NULL);
}