/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 17:22:50 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 17:22:50 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int i;
    i = 0;

    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
//int main()
//{
//    ft_putendl_fd("hello", 1);
//}