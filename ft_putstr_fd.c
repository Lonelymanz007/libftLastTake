/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 17:18:23 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 17:18:23 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;

    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
//int main()
//{
//    ft_putstr_fd("Hello", 1);
//}