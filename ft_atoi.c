/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 08:27:17 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-04 08:27:17 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int j;
    int ans;

    i = 0;
    j = 0;
    ans = 0;    
    while((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            j++;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        ans = (ans * 10) + (str[i] - '0');
        i++;
    }
    if(j % 2 != 0)
        return(-ans);
    return(ans);
}
